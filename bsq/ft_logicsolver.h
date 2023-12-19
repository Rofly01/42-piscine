/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logicsolver.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:40:42 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/16 23:15:02 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LOGICSOLVER_H
# define FT_LOGICSOLVER_H
# include "ft_structs.h"

int	ft_checkmm(int min, int **matrix, int x, int y)
{
	min = matrix[y][x - 1]; 
	if (min > matrix[y - 1][x - 1]) 
		min = matrix[y - 1][x - 1]; 
	if (min > matrix[y - 1][x])
		min = matrix[y - 1][x];
	matrix[y][x] += min;
	if (matrix[g_max.y][g_max.x] < matrix[y][x])
	{
		g_max.x = x;
		g_max.y = y;
		g_max.v = matrix[y][x];
	}
	return (min);
}

void	ft_resolvematrix(int **matrix)
{
	int	x;
	int	y;
	int	min;

	y = 1;
	g_max.x = 1;
	g_max.y = 1;
	while (y < g_map.nbrl)
	{
		x = 1;
		while (x < g_max.fc)
		{
			if (!(matrix[y][x] == 0 || matrix[y][x - 1] == 0 || 
			matrix[y - 1][x] == 0 || matrix[y - 1][x - 1] == 0))
			{
				min = matrix[y][x - 1];
				min = ft_checkmm(min, matrix, x, y);
			}
			x++;
		}
		y++;
	}
}
#endif /* FT_LOGICSOLVER_H */
