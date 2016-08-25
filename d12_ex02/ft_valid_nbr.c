/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 19:50:01 by npasquie          #+#    #+#             */
/*   Updated: 2016/08/24 13:01:39 by npasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_valid_nbr(char **av, int *nb_c)
{
	int		i;

	g_errno.valid_nbr = 0;
	i = 0;
	if (av[2][0] == 0)
		return (0);
	while (av[2][i] == ' ')
		i++;
	if (av[2][i] == '+')
		g_errno.valid_nbr = 5;
	*nb_c = ft_atoi(&(av[2][i]));
	if (*nb_c < 0)
		*nb_c = *nb_c * -1;
	if (!((av[2][i] >= '0' && av[2][i] <= '9') || av[2][i] == '+'
			|| av[2][i] == '-'))
		return (0);
	i++;
	while (av[2][i] != 0)
	{
		if (!(av[2][i] >= '0' && av[2][i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
