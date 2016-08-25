/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 06:29:44 by npasquie          #+#    #+#             */
/*   Updated: 2016/08/24 13:03:45 by npasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int ac, char **av)
{
	int		nb_c;
	int		i;

	i = 2;
	g_errno.main = 0;
	if (ac < 4)
	{
		g_errno.main = MISSING_FILE_NAME;
		write(2, "File name missing.\n", 19);
	}
	else
	{
		if (!(ft_valid_nbr(av, &nb_c)))
		{
			g_errno.main = INVALID_OFFSET;
			write(2, "tail : invalide offset -- ", 26);
			ft_putstr(av[2]);
			ft_putchar('\n');
		}
	}
	while (i++ < ac - 1)
		ft_printtail(ac, av[i], nb_c, i);
	return (g_errno.main);
}
