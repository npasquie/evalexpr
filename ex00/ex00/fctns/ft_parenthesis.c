/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parenthesis.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 23:29:42 by npasquie          #+#    #+#             */
/*   Updated: 2016/08/21 12:31:54 by npasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_parenthesis(int cursor, char *str)
{
	int i;
	int j;
	char c;

	c = 1;
	while (c == 1)
	{
	j = 0;
	i = 0;
		while (str[cursor + i] != '(' && str[cursor + i]
				!= ')' && str[cursor + i] != '\0')
		i++;
		if (str[cursor + i] == ')' || str[cursor + i] == '\0')
		{
			while (cursor + j < cursor + i)
			{
				if (str[cursor + j] == '*' || str[cursor + j] == '/'
						|| str[cursor + j] == '%')
					ft_calc(cursor + j, str);
				j++;
			}
			j = 0;
			while (cursor + j < cursor + i)
			{
				if (str[cursor + j] == '+' || (str[cursor + j] == '-'
							&& str[cursor + j + 1] == ' '))
					ft_calc(cursor + j, str);
				j++;
			}
			ft_rm_parenth(cursor + j, str);
			c = 0;
		}
		else if (str[cursor + i] == '(')
			(ft_parenthesis(cursor + i + 1, str));
	}
}
