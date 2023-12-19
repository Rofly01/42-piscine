/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:40:19 by rofde-je          #+#    #+#             */
/*   Updated: 2023/07/31 17:44:27 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int		type;
	int		i;
	int		asc;

	type = 1;
	i = 0;
	while (str[i] != '\0')
	{
		asc = (int)str[i];
		if (asc < 32 || asc > 126)
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

	a = ft_str_is_printable("Born2Code");
	printf("MAKECODE: %d\n", a);
	a = ft_str_is_printable("\n");
	printf("Quebra de linha: %d\n", a);
	a = ft_str_is_printable("");
	printf("Empty: %d\n", a);
}*/
