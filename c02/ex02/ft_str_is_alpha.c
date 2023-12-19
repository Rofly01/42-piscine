/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:40:19 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/01 12:51:58 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	type;
	int	asc;
	int	i;

	type = 1;
	i = 0;
	while (str[i] != '\0')
	{
		asc = (int)str[i];
		if ((asc > 90 && asc < 97) || asc < 65 || asc > 122)
		{
			if (asc != 0)
			{
				type = 0;
			}
		}
		i++;
	}
	return (type);
}
/*
int	main(void)
{
	int	a;

	a = ft_str_is_alpha("Ro0fly");
	printf("Ro0fly: %d\n", a);
	a = ft_str_is_alpha("Rofly");
	printf("Rofly: %d\n", a);
	a = ft_str_is_alpha("");
	printf("Empty: %d\n", a);
}*/
