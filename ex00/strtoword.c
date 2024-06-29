#include "headers.h"



int printstr(int num)
{
    t_dict **dict;
    char str[BUFFER_SIZE];
    int i;
    int size;

    if (load_dict(str) < 0)
    {
        write(1, "Dict Error\n",11);
        return (-1);
    }
    if (spliter(str,dict) < 0)
    {
        write(1, "Dict Error\n",11);
        return (-1);
    }

   
    /*while( str[i] != '\n'||str[i] != 0 )
    {
        
    }*/
    
    
    return (1);
}

int load_dict(char str[BUFFER_SIZE])
{
     int file;
     int file_size;

     file = open("data/numbers.dict",O_RDWR);
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
int spliter(char *str, t_dict **dict)
{
    int i;

    i =0;
    while (str[i] != 0)
    {
        
    }
}