/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:43:22 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/08 12:05:32 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (r);
	else if (nb > 1)
	{
		r *= nb;
		r *= ft_recursive_factorial(nb - 1);
	}
	return (r);
}

/*
int	main(void)
{
	printf("%d", ft_recursive_factorial(6));
}*/
