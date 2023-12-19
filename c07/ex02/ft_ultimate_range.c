/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:25:13 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/17 19:14:50 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	l;
	int	i;
	int	*array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	l = (max - min);
	array = (int *)malloc(sizeof(int) * l);
	if (array == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (l);
}

/*
int	main(void)
{
	int	*range;
	int	max;
	int	min;
	int	i;

	max = 10;
	min = -20;
	i = 0;
	printf("%d\n", ft_ultimate_range(&range, min, max));
	while (min < max)
	{
		printf("%d ", range[i]);
		i++;
		min++;
	}
	return (0);
}*/
