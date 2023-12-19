/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:40:19 by rofde-je          #+#    #+#             */
/*   Updated: 2023/07/31 15:08:31 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int		type;
	int		i;
	int		asc;

	type = 1;
	i = 0;
	while (str[i] != '\0')
	{
		asc = (int)str[i];
		if (asc < 48 || asc > 57)
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

	a = ft_str_is_numeric("1234");
	printf("1234: %d\n", a);
	a = ft_str_is_numeric("born2code");
	printf("born2code: %d\n", a);
	a = ft_str_is_numeric("");
	printf("Empty: %d\n", a);
} 
*/
