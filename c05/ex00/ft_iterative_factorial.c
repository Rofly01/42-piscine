/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:01:14 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/08 11:36:38 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (r);
	while (nb > 1)
	{
		r *= nb;
		nb--;
	}
	return (r);
}

/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(9));
}*/
