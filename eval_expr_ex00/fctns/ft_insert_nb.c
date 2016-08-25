/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_nb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 01:53:55 by npasquie          #+#    #+#             */
/*   Updated: 2016/08/21 19:30:17 by npasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_norm_insert_nb(int result, char *str, int pos1, int *i)
{
	char	c;
	int		j;

	j = 1000000000;
	while (j > 0)
	{
		if (j <= result)
		{
			if (j != 1000000000)
				c = (((result % (j * 10)) - (result % j)) / j) + '0';
			else
				c = (result / j) + '0';
			str[pos1 + *i] = c;
			(*i)++;
		}
		j = j / 10;
	}
}

void	ft_insert_nb(int pos1, int pos2, char *str, int result)
{
	int		i;

	i = 0;
	if (result < 0)
	{
		str[pos1 + i] = '-';
		result = result * -1;
		i++;
	}
	if (result == 0)
	{
		str[pos1 + i] = '0';
		i++;
	}
	else
		ft_norm_insert_nb(result, str, pos1, &i);
	while (pos1 + i <= pos2)
	{
		str[pos1 + i] = ' ';
		i++;
	}
}
