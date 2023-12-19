/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:58:56 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/01 14:53:58 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	a;
	int	b;
	int	c;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		a = (int)s1[i];
		b = (int)s2[i];
		c = a - b;
		if (c != 0)
		{
			return (c);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char s1[] = "Born2Code";
	char s2[] = "Born2Code";
	char s3[] = "Born";
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s1, s3));
}*/
