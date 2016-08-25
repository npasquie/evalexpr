/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 23:19:37 by npasquie          #+#    #+#             */
/*   Updated: 2016/08/21 21:42:54 by npasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"
#include "ft_opp.h"

void	ft_norm_calc(t_calc *calc, int cursor, char *str)
{
	if (cursor + calc->i != 0)
		(calc->i)++;
	calc->nb1 = ft_atoi(&(str[cursor + calc->i]));
	calc->pos1 = cursor + calc->i;
	calc->i = 1;
	calc->nb2 = ft_atoi(&(str[cursor + calc->i]));
	while (str[cursor + calc->i] == ' ')
		(calc->i)++;
	while (str[cursor + calc->i] == '-' || (str[cursor + calc->i] >= '0'
				&& str[cursor + calc->i] <= '9'))
		(calc->i)++;
	(calc->i)--;
	calc->pos2 = cursor + calc->i;
}

void	ft_calc(int cursor, char *str)
{
	t_calc	calc;

	calc.j = 0;
	calc.i = -1;
	while (str[cursor + calc.i] == ' ' && cursor + calc.i > 0)
		calc.i--;
	while (((str[cursor + calc.i] >= '0' && str[cursor + calc.i] <= '9')
				|| str[cursor + calc.i] == '-') && cursor + calc.i > 0)
		calc.i--;
	ft_norm_calc(&calc, cursor, str);
	while (calc.j < 5)
	{
		if (str[cursor] == g_opptab[calc.j].operatorr[0])
			calc.ptrfonct = g_opptab[calc.j].ptr_fonctt;
		calc.j++;
	}
	calc.result = calc.ptrfonct(calc.nb1, calc.nb2);
	str[cursor] = ' ';
	ft_insert_nb(calc.pos1, calc.pos2, str, calc.result);
}
