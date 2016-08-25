/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 23:13:12 by npasquie          #+#    #+#             */
/*   Updated: 2016/08/21 22:36:45 by npasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}

int		eval_expr(char *str)
{
	char *str2;

	str2 = ft_strdup(str);
	ft_parenthesis(0, str2);
	free(str2);
	return (ft_atoi(str2));
}
