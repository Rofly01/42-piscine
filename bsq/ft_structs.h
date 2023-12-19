/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structs.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:50:30 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/16 22:23:43 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRUCTS_H
# define FT_STRUCTS_H
# define M3_BUFF 3000000

typedef struct s_map
{
	char	vaz;
	char	obs;
	char	che;
	char	*cont;
	int		nbrl;
}		t_map;

typedef struct s_max
{
	int	x;
	int	y;
	int	v;
	int	fc;
}		t_max;

t_map	g_map;
t_max	g_max;
char	**g_matrix_final;
int		g_error;

#endif /* FT_STRUCTS_H */
