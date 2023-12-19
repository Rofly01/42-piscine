/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:10:46 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/17 14:35:46 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr(int nb)
{
	char	n;

	n = 48;
	if (nb < 10)
	{
		n += nb;
		write(1, &n, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putchar(par[i].str);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putchar(par[i].copy);
		i++;
	}
}

/*
int	main(int argc, char *argv[])
{
	t_stock_str	*strings;
	int			i;

	i = 0;
	strings = ft_strs_to_tab(argc, argv);
	ft_show_tab(strings);
	return (0);
}*/
