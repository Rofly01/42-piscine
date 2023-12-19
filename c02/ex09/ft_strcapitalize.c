/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:40:19 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/02 10:10:42 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	ft_check(int v)
{
	if (v < 48 || (v > 57 && v < 65) || (v > 90 && v < 97) || v > 122)
	{
		v = 1;
	}
	return (v);
}

char	*ft_strlowcase(char *str)
{
	char	c;
	int		i;
	int		asc;

	i = 0;
	while (str[i] != '\0')
	{
		asc = (int)str[i];
		if (asc >= 65 && asc <= 90)
		{
			c = (char)(asc + 32);
			str[i] = c; 
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		a;
	int		asc;

	i = 0;
	a = 0;
	(*ft_strlowcase)(str);
	while (str[i] != '\0')
	{
		asc = (int)(str[i]);
		if ((a == 1 || i == 0) && asc >= 97 && asc <= 122)
		{
			str[i] = (char)(asc - 32);
			a = 0;
		}
		a = ft_check(asc);
		i++;
	}
	return (str);
}

/*
int	main(void)
{	
	char a[] = "ola, TUDO bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char* b;
       
	b = ft_strcapitalize(a);
	printf("%s\n", b);
}*/
