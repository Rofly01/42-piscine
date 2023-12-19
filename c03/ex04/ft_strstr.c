/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:21:55 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/12 12:19:32 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_size(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strncmpm(char *s1, char *s2, unsigned int u, unsigned int n)
{
	unsigned int	i;

	n = ft_size(s2);
	i = 0;
	while (i < n)
	{
		if ((s1[u] - s2[i]) != 0)
		{
			return (0);
		}
		u++;
		i++;
	}
	return (u);
}

char	*ft_strstr(char *str, char *to_find)
{
	int unsigned	i;
	int unsigned	n;
	int unsigned	u;

	i = 0;
	n = ft_size(to_find);
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		u = ft_strncmpm(str, to_find, i, n);
		if (u != 0)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	array[] = "Hello";
	printf("%s\n", ft_strstr("He..Hello, World", array));
}*/
