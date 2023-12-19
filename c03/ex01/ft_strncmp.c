/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:58:56 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/02 19:44:58 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				a;
	int				b;
	int				c;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
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
	char s2[] = "Born";
	char s3[] = "Code";
	printf("%d\n", ft_strncmp(s1, s2, 4));
	printf("%d\n", ft_strncmp(s1, s3, 4));
}*/
