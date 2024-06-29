#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int printstr(int num);
int ft_atoi(char *str);


int main(int a, char **v)
{
    int num;

    if (a == 1)
    {
	    write (1, "Error\n", 6);
    }
    else if (a == 2)
    {
        num = ft_atoi(v[1]);
        if (num < 0)
        {
            write(1, "Error\n", 6);
            return(0);
        }
        if (printstr(num) == 1)
            write(1,"main good",9);
        
    }
    else if(a == 3)
    {
	    write (1, "intering new referanc\n",23);
    }
    else
	    write (1, "Error\n", 6);
    return (0);
}
