#ifndef HEADERS_H
#define HEADERS_H

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

typedef struct s_dict
{
    int key;
    char *value;

}       t_dict;

int	ft_matoi(char *str);
int	ft_atoi(char *str);
int load_dict(char str[BUFFER_SIZE]);
int printstr(int num);
int	ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
int	ft_str_is_numeric(char *str);
char	*ft_strcat(char *dest, char *src);
int spliter(char *str, t_dict *dict , int *count);
void	ft_putstr(char *str);
void assign(t_dict *dict, char *ckey, char *value, int *count);
char	*ft_strncat(char *dest, char *src, unsigned int nb);


#endif