#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#define BUFFER_SIZE 1024

typedef struct s_dict
{
    int key;
    char *value;
}t_dict;

void	ft_putstr(char *str);
int load_dict(char str[BUFFER_SIZE]);



int printstr(int num)
{
    t_dict *dict;
    t_dict kvp;
    char str[BUFFER_SIZE];
    char c;
    int size;

    if (load_dict(str) < 0)
    {
        write(1, "Dict Error\n",11);
        return (-1);
    }

   
    /*while ( c != '\n'||c != 0 )
    {
        kvp.value[size] = c;
        read(file, kvp.value,1);
        size ++;
    }*/
    //ft_putstr(kvp.value);
    
    
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
    
    
    ft_putstr(str);

    return (1); 
}