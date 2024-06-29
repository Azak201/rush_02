#include "headers.h"

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*org;

	org = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && nb)
	{
		*dest = *src;
		dest++;
		src++;
		nb --;
	}
	*dest = '\0';
	return (org);
}

