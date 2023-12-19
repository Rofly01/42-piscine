/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:33:35 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/17 13:50:28 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

/*
typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}		t_stock_str;
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_free_struct(struct s_stock_str *structure, int i)
{
	int	i2;

	i2 = 0;
	while (i2 < i)
	{
		free(structure[i2].copy);
		i2++;
	}
	free(structure);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*store_str;
	int			i;

	store_str = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (store_str == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		store_str[i].size = ft_strlen(av[i]);
		store_str[i].str = av[i];
		store_str[i].copy = malloc(sizeof(char) * (store_str[i].size + 1));
		if (store_str[i].copy == NULL)
		{
			ft_free_struct(store_str, i);
			return (NULL);
		}
		ft_strcpy(store_str[i].copy, av[i]);
		i++;
	}
	store_str[i].size = 0;
	store_str[i].str = NULL;
	store_str[i].copy = NULL;
	return (store_str);
}

/*
int	main(int argc, char *argv[])
{
	t_stock_str	*strings;
	int			i;

	i = 0;
	strings = ft_strs_to_tab(argc, argv);
	while (i < argc)
	{
		printf("%d\n", strings[i].size);
		printf("%s\n", strings[i].str);
		printf("%s\n", strings[i].copy);
		i++;
	}
	return (0);
}*/
