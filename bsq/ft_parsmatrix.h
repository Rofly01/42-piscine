/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsmatrix.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:04:53 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/16 22:15:05 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSMATRIX_H
# define FT_PARSMATRIX_H
# include "ft_structs.h"
# include <stdio.h>

int	ft_lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

int	ft_convert(char ch)
{
	if (ch == g_map.vaz)
		return (1);
	else if (ch == g_map.obs)
		return (0);
	else
		g_error = 1;
	return (-1);
}

int	**ft_allocme(int **matrix_0_1)
{
	int	i;

	i = 0;
	g_max.fc = ft_lenght(&g_map.cont[i]);
	matrix_0_1 = (int **)malloc(sizeof(int *) * g_map.nbrl);
	g_matrix_final = (char **)malloc(sizeof(char *) * g_map.nbrl + 1);
	if (matrix_0_1 == NULL || g_matrix_final == NULL)
		return (NULL);
	while (i < g_map.nbrl)
	{
		matrix_0_1[i] = (int *)malloc(sizeof(int) * g_max.fc);
		g_matrix_final[i] = (char *)malloc(sizeof(char) * g_max.fc + 1);
		if (matrix_0_1 == NULL || g_matrix_final == NULL)
			return (NULL);
		i++;
	}
	return (matrix_0_1);
}

int	**ft_strtolines(int **matrix_0_1, int nl)
{
	int	i;
	int	i2;
	int	i3;

	i = 0;
	i2 = 0;
	i3 = 0;
	matrix_0_1 = ft_allocme(matrix_0_1);
	while (nl-- > 0)
	{
		i3 = 0;
		if (ft_lenght(&g_map.cont[i]) != g_max.fc)
			g_error = 1;
		while (g_map.cont[i] != '\n' && g_map.cont[i])
		{
			g_matrix_final[i2][i3] = g_map.cont[i];
			matrix_0_1[i2][i3] = ft_convert(g_map.cont[i]);
			i++;
			i3++;
		}
		i2++;
		i++;
	}
	return (matrix_0_1);
}
#endif /* FT_PARSMATRIX_H */
