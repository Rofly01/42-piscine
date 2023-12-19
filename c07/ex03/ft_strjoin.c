/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:12:58 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/17 19:10:45 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = ft_strlen(dest);
	while (src[i])
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

int	ft_allstrs(char **strs)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (strs[i])
	{
		s += ft_strlen(strs[i]);
		i++;
	}
	return (s);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*allstr;
	int		l;
	int		i;

	l = ft_strlen(sep) * (size - 1);
	l += ft_allstrs(strs);
	allstr = (char *)malloc(sizeof(char) * (l) + 1);
	if (size > 0)
	{
		i = 0;
		while (strs[i])
		{
			if (i > 0)
				ft_strcat(allstr, sep);
			ft_strcat(allstr, strs[i]);
			i++;
		}
		allstr[l] = '\0';
	}
	else
		allstr = NULL;
	return (allstr);
}

/*
int	main(int argc, char *argv[])
{
	char	*str;
	int		i;

	i = argc;
	i = 0;
	while (argv[i])
		i++;
	str = ft_strjoin(i, argv, "|||");
	printf("%s", str);
	free(str);
}*/
