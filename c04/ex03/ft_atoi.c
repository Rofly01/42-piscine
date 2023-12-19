/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:08:56 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/07 14:43:57 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_check(char ch)
{
	if ((ch >= 48 && ch <= 57) || ch == 32 || ch == 43 || ch == 45)
		return (0);
	else if (ch >= 9 && ch <= 13)
		return (0);
	return (1);
}

int	ft_sinal(int v, char ch)
{
	if (ch == 45)
	{
		return (v * -1);
	}
	else
	{
		return (v);
	}
}

int	ft_chartoint(int v, char ch)
{
	if (ch >= 48 && ch <= 57)
	{
		v = (v * 10) + (ch - 48);
		return (v);
	}
	return (v);
}

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	n;

	i = 0;
	n = 0;
	s = 1;
	while (str[i])
	{
		if (ft_check(str[i]) == 1)
		{
			return (n * s);
		}
		s = ft_sinal(s, str[i]);
		n = ft_chartoint(n, str[i]);
		i++;
	}
	return (n * s);
}


int	main(void)
{
	printf("%d", ft_atoi(" \n \t \v \f \r ----+--+1234ab567"));
}
