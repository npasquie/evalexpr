/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 23:13:12 by npasquie          #+#    #+#             */
/*   Updated: 2016/08/21 17:34:54 by npasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int ac, char **av)
{
	char *str;

	if (ac != 2)
		return (0);
	str = ft_strdup(av[1]);
	ft_putnbr(eval_expr(str));
	ft_putchar('\n');
	free(str);
	return (0);
}

int		eval_expr(char *str)
{
	ft_parenthesis(0, str);
	return (ft_atoi(str));
}
