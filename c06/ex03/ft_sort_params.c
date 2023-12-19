/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:27:43 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/09 14:22:16 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void	ft_organize(int argc, char *argv[])
{
	char	*tmp;
	int		i;
	int		i2;

	i = 1;
	while (i < argc)
	{
		i2 = 1;
		while (i2 < argc)
		{
			if (ft_strcmp(argv[i2], argv[i]) > 0)
			{
				tmp = argv[i2];
				argv[i2] = argv[i];
				argv[i] = tmp;
			}
			i2++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	ft_organize(argc, argv);
	i = 1;
	while (argv[i])
	{
		ft_write(argv[i]);
		i++;
	}
}
