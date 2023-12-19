/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .ft_sort_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:29:55 by rofde-je          #+#    #+#             */
/*   Updated: 2023/07/30 14:55:32 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

void ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	n;
	int	i;

	i = 0;
	while (i < size)
	{	
		n = 0;
		while (n < size)
		{
			if (i != n)
			{
				if (tab[i] < tab[n])
				{
					a = tab[i];
					tab[i] = tab[n];
					tab[n] = a;
				}
			}
			n++;
		}
		i++;
	}
}

int	main(void)
{
	int a[] = {3, 2, 1};
	ft_sort_int_tab(a, 3);
	printf("%d, %d, %d", a[0], a[1], a[2]);
	return(0);
}
