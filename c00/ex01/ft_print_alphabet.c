/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:11:03 by rofde-je          #+#    #+#             */
/*   Updated: 2023/07/30 18:06:48 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	a;
	float	i;

	a = 'a';
	i = 0;
	while (i < 26)
	{
		write(1, &a, 1);
		a++;
		i++;
	}
}
