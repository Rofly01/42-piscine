/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:40:19 by rofde-je          #+#    #+#             */
/*   Updated: 2023/07/31 17:41:07 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	char	c;
	int		i;
	int		asc;

	i = 0;
	while (str[i] != '\0')
	{
		asc = (int)str[i];
		if (asc >= 97 && asc <= 122)
		{
			c = (char)(asc - 32);
			str[i] = c; 
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{	
	char a[] = "Born2Code";
	char* b;
       
	b = ft_strupcase(a);
	printf("%s\n", b);
}*/
