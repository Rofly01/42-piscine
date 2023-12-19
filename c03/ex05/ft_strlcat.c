/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:23:41 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/11 12:15:39 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	get_size(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l1;
	unsigned int	l2;
	unsigned int	r;
	unsigned int	i;

	i = 0;
	l1 = get_size(dest);
	l2 = get_size(src);
	if (size <= l2)
		r = l1 + size;
	else
		r = l1 + l2;
	while (src[i] != '\0' && i < size)
	{
		dest[l1] = src[i];
		i++;
		l1++;
	}
	dest[l1] = '\0';
	return (r);
}

/*
int	main(void)
{
	char str1[] = "Hello,";
	char str2[] = " World";

	printf("%d\n", ft_strlcat(str1, str2, 30));
	printf("%s", str1);
}*/
