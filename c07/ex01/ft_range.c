/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:43:07 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/17 16:37:23 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	l;
	int	i;
	int	*array;

	if (min >= max)
		return (NULL);
	l = (max - min);
	i = 0;
	if (l > 0)
		array = (int *)malloc(sizeof(int) * l);
	else
		array = (int *)malloc(sizeof(int) * (l * -1));
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	if (min > max)
		return (NULL);
	return (array);
}

/*
int	main(void)
{
	int	max;
	int	min;
	int	i;

	max = 10;
	min = -10;
	i = 0;
	while (i < (max - min))
	{
		printf("%d\n", ft_range(min, max)[i]);
		i++;
	}
	return (0);
}
*/
