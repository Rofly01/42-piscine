/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readmap.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:41:48 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/16 23:23:47 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_READMAP_H
# define FT_READMAP_H
# include "ft_structs.h"

void	ft_verifymap(void)
{
	if (g_map.che == g_map.obs)
		g_error = 1;
	else if (g_map.che == g_map.vaz)
		g_error = 1;
	else if (g_map.vaz == g_map.obs)
		g_error = 1;
}

void	ft_nbrlines(int l, char *str)
{
	int	i;

	i = 0;
	while (i <= l - 4)
	{
		if (str[i] < 48 || str[i] > 57)
			g_error = 1;
		if (i == 0)
			g_map.nbrl = str[i] - 48;
		else
			g_map.nbrl = (g_map.nbrl * 10) + str[i] - 48;
		i++;
	}
}

int	ft_contentuser(char *content)
{
	int	i;
	int	bytes_read;

	i = 0;
	while (1) 
	{
		bytes_read = read(STDIN_FILENO, content + i, M3_BUFF);
		if (bytes_read == 0)
			break ;
		if (bytes_read < 0)
		{
			g_error = 1;
			break ;
		}
		if (bytes_read > 0)
		{
			i += bytes_read;
		}
	}
	content[i] = '\0';
	return (bytes_read);
}

void	ft_readmap(int file)
{
	char	*content;
	int		bytes_read;
	int		l;
	int		s;

	l = 0;
	s = 0;
	g_map.nbrl = 0;
	content = (char *)malloc(sizeof(char) * M3_BUFF);
	if (file == -1)
		exit(1);
	else if (file == -2)
		bytes_read = ft_contentuser(content);
	else
		bytes_read = read(file, content, M3_BUFF);
	while (content[l] != '\n')
		l++;
	g_map.che = content[l - 1];
	g_map.obs = content[l - 2];
	g_map.vaz = content[l - 3];
	g_map.cont = &content[l + 1];
	ft_nbrlines(l, content);
	ft_verifymap();
}

#endif /* FT_READMAP_H */
