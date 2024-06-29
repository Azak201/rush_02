#include <unistd.h>


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0' )
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			r = 1;
		else
		{
			r = 0;
			break ;
		}
		i ++;
	}
	return (r);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	char	*org;

	org = dest;
	i = 0;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest ++;
		src ++;
	}
	*dest = '\0';
	return (org);
}

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x] != 0)
	{
		write(1, &str[x], 1);
		x++;
	}
}