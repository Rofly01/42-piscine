/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:46:32 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/14 14:45:51 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE 1
# define FALSE 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS TRUE
# define EVEN ft_even

typedef int	t_bool;

t_bool	ft_even(int nbr)
{
	if (nbr % 2 == 0)
		return (TRUE);
	else
		return (FALSE);
}
#endif /* FT_BOOLEAN_H */
