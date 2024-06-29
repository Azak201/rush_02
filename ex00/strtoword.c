#include "headers.h"



int printstr(int num)
{
    t_dict *dict;
    char str[BUFFER_SIZE];
    int i;
    int count;
    int size;

    count = 0;
    dict = (t_dict *)malloc(BUFFER_SIZE * sizeof(t_dict));
    if (dict == NULL)
    {
        write(1, "Error\n" ,6);
        return (-1);
    }
    if (load_dict(str) < 0)
    {
        write(1, "Dict Error\n",11);
        return (-1);
    }
    if (spliter(str,dict,&count) < 0)
    {
        write(1, "Dict Error\n",11);
        return (-1);
    }
    write(1 ,"done\n",5);
   
    //write (1, dict[2].value, sizeof(char) * ft_strlen(dict[2].value));
    
    
    return (1);
}

int load_dict(char str[BUFFER_SIZE])
{
     int file;
     int file_size;

     file = open("numbers.dict",O_RDWR);
     if (file < 0)
    {
        write(1, "Dict Error\n",11);
        return (-1);
    }
    file_size = read(file,str, BUFFER_SIZE);
    if (file_size < 0)
    {
        write(1, "Dict Error\n",11);
        return (-1);
    }
    return (1); 
}
int spliter(char *str, t_dict *dict,int *count)
{
    int i;
    int s;    
    char *c1;
    char *c2;

    s =0;
    i =0;
    c1 = (char *)malloc(BUFFER_SIZE * sizeof(char));
    c2 = (char *)malloc(BUFFER_SIZE * sizeof(char));
    if (c1 == NULL || c2 == NULL) 
    {
        write(1,"Memory\n",7);
        return -1;
    }
    while (str[i] != '\0') {
    if (str[i] != ':' && s == 0) {
        ft_strncat(c1, &str[i], 1);
    }
    else if (str[i] == ':') 
    {
        ft_strncat(c1, "\0", 1);
        s = 1;
    }
    else if (str[i] != '\n' && s == 1) {
        ft_strncat(c2, &str[i], 1);
    }
    else if (str[i] == '\n') {
        ft_strncat(c2, "\0", 1);
        assign(dict, c1, c2, count);
        c1[0] = '\0';  
        c2[0] = '\0';  
        s = 0;
    }
    i++;
}
    dict[(*count)].value =0;
    free(c1);
    free(c2);
    return (1);
}

void assign(t_dict *dict, char *ckey, char *value, int *count)
{
    int i = *count;
    dict[i].key = ft_atoi(ckey);
    ft_strcat(dict[i].value, value);
    (*count) ++;
}