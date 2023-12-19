/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:56:23 by rofde-je          #+#    #+#             */
/*   Updated: 2023/07/30 14:24:31 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	i;

	i = 0;
	while (size / 2 > i)
	{
		a = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = a;
		i++;
	}

}


int	main(void)
{
	int	array[] = {1, 2, 3, 4, 5};
	int	size = 5;

	ft_rev_int_tab(array, size);
	printf("%d, %d, %d, %d, %d", array[0], array[1], array[2], array[3], array[4]);
	return(0);
}

