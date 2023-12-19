/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:40:19 by rofde-je          #+#    #+#             */
/*   Updated: 2023/07/31 15:49:23 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int		type;
	int		i;
	int		asc;

	type = 1;
	i = 0;
	while (str[i] != '\0')
	{
		asc = (int)str[i];
		if (asc < 97 || asc > 122)
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

	a = ft_str_is_lowercase("makecode");
	printf("makecode: %d\n", a);
	a = ft_str_is_lowercase("Born2Code");
	printf("born2code: %d\n", a);
	a = ft_str_is_lowercase("");
	printf("Empty: %d\n", a);
}
*/
