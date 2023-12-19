/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:40:19 by rofde-je          #+#    #+#             */
/*   Updated: 2023/07/31 15:54:18 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int		type;
	int		i;
	int		asc;

	type = 1;
	i = 0;
	while (str[i] != '\0')
	{
		asc = (int)str[i];
		if (asc < 65 || asc > 90)
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

	a = ft_str_is_uppercase("MAKECODE");
	printf("MAKECODE: %d\n", a);
	a = ft_str_is_uppercase("Born2Code");
	printf("born2code: %d\n", a);
	a = ft_str_is_uppercase("");
	printf("Empty: %d\n", a);
}*/
