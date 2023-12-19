/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:29:55 by rofde-je          #+#    #+#             */
/*   Updated: 2023/07/30 14:58:04 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
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
