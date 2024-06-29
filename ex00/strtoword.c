#include <unistd.h>
#include <fcntl.h>
void	ft_putstr(char *str);
typedef struct
{
    int key;
    char *value;
}s_dict;

int printstr(int num)
{
    s_dict kvp;
    int file;
    char c;
    int size;

    kvp.key = num;
    size = 0;
    file = open("data/numbers.dict",O_RDWR);
    if (file < 0)
    {
        write(1, "Dict Error\n",11);
        return (-1);
    }

    read(file, ,1);
    /*while ( c != '\n'||c != 0 )
    {
        kvp.value[size] = c;
        read(file, kvp.value,1);
        size ++;
    }*/
    kvp.value[100]=0;
    ft_putstr(kvp.value);
    
    close(file);
    return (1);
}