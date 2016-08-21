/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 23:19:37 by npasquie          #+#    #+#             */
/*   Updated: 2016/08/21 17:34:51 by npasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_opp.h"

void	ft_calc(int cursor, char *str)
{
	int		i;
	int		nb1;
	int		nb2;
	int		pos1;
	int		pos2;
	int		j;
	int		result;
	int		(*ptrfonct)(int, int);

	j = 0;
	i = -1;
	while (str[cursor + i] == ' '  && cursor + i > 0)
			i--;
	while (((str[cursor + i] >= '0' && str[cursor + i] <= '9')
				|| str[cursor + i] == '-') && cursor + i > 0)
		i--;
	if (cursor + i != 0)
		i++;
	nb1 = ft_atoi(&(str[cursor + i]));
	pos1 = cursor + i;
	i = 1;
	nb2 = ft_atoi(&(str[cursor + i]));
	while (str[cursor + i] == ' ')
		i++;
	while (str[cursor + i] == '-' || (str[cursor + i] >= '0'
				&& str[cursor + i] <= '9'))
		i++;
	i--;
	pos2 = cursor + i;
	while (j < 5)
	{
		if (str[cursor] == g_opptab[j].operatorr[0])
			ptrfonct = g_opptab[j].ptr_fonctt;
		j++;
	}
	result = ptrfonct(nb1, nb2);
	str[cursor] = ' ';
	ft_insert_nb(pos1, pos2, str, result);
}
