/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:40:32 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/17 12:13:42 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		i;

	if (src == NULL)
		return (NULL);
	i = 0;
	cpy = (char *)malloc(sizeof(char) * ft_len(src) + 1);
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

/*
int	main(void)
{
	printf("%s", ft_strdup("Hello, World!"));
	return (0);
}*/
