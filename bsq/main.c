/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:44:41 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/16 23:42:25 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft_structs.h"
#include "ft_parsmatrix.h"
#include "ft_logicsolver.h"
#include "ft_readmap.h"

static int	**g_matrix;
static int	g_file;

void	ft_applymatrix(char **g)
{
	int	i;
	int	i2;
	int	i3;
	int	i4;

	i = g_max.v;
	i3 = 0;
	while (i > 0)
	{
		i2 = g_max.v;
		i4 = 0;
		while (i2 > 0)
		{
			g[g_max.y - i3][g_max.x - i4] = g_map.che; 
			i2--;
			i4++;
		}
		i3++;
		i--;
	}
}

void	ft_show(char **g, int c)
{
	int	x;
	int	y;

	y = 0;
	if (g_error == 0)
	{
		while (g[y])
		{
			x = 0;
			while (g[y][x])
			{
				write(1, &g[y][x], 1);
				x++;
			}
			write(1, "\n", 1);
			y++;
		}
		if (c > 2)
			write(1, "\n", 1);
	}
	else
		write(2, "map error\n", 10);
}

void	ft_callft(int argc)
{
	g_matrix = ft_strtolines(g_matrix, g_map.nbrl);
	ft_resolvematrix(g_matrix);
	ft_applymatrix(g_matrix_final);
	ft_show(g_matrix_final, argc);
}

int	main(int argc, char *argv[])
{
	int	i;

	g_matrix = NULL;
	i = 1;
	if (argc == 1)
	{
		write(1, "Insert the characters. Press CTRL + D to finish.\n", 67);
		ft_readmap(-2);
		ft_callft(argc);
	}
	else if (argc > 1)
	{
		while (argv[i])
		{
			g_error = 0;
			g_file = open(argv[i], O_RDONLY);
			ft_readmap(g_file);
			g_matrix = ft_strtolines(g_matrix, g_map.nbrl);
			ft_resolvematrix(g_matrix);
			ft_applymatrix(g_matrix_final);
			ft_show(g_matrix_final, argc);
			i++;
		}
	}
}
