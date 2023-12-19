/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:56:23 by rofde-je          #+#    #+#             */
/*   Updated: 2023/07/30 14:26:45 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
