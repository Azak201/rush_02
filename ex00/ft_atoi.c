/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:39:49 by amismail          #+#    #+#             */
/*   Updated: 2024/06/24 15:39:54 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int		count;
	int		negative;
	int		number;

	count = 0;
	negative = 0;
	number = 0;
	if((str[count] != '\0') && (str[count] == '+' || str[count] == '-'))
	{
		if (str[count] == '-')
			negative++;
		count++;
	}
	while (str[count] != '\0')
	{
		if (str[count] >= 48 && str[count] <= 57)
		{
		number = number * 10 + str[count] - 48;
		count++;
		}
		else
			return (-1);
	}
	if (negative % 2 != 0)
		return (number * -1);
	return (number);
}

/*int main()
{
    char str1[] = "--+++--+-12345";
    char str2[] = "-6789";
    char str3[] = "+42";
    char str4[] = "  -999";

    int num1 = ft_atoi(str1);
    int num2 = ft_atoi(str2);
    int num3 = ft_atoi(str3);
    int num4 = ft_atoi(str4);

    printf("String: %s, Integer: %d\n", str1, num1);
    printf("String: %s, Integer: %d\n", str2, num2);
    printf("String: %s, Integer: %d\n", str3, num3);
    printf("String: %s, Integer: %d\n", str4, num4);

    return 0;
}*/
