/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:55:53 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/08 16:34:39 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	r;

	r = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 1)
	{
		nb *= ft_recursive_power(r, power - 1);
	}
	return (nb);
}

/*
int	main(void)
{
	printf("%d", ft_recursive_power(3, 5));
}*/
