/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 11:33:29 by npasquie          #+#    #+#             */
/*   Updated: 2016/08/24 10:28:47 by npasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_err_putstr(char *str)
{
	int		cursor;

	cursor = 0;
	while (str[cursor] != '\0')
	{
		ft_err_putchar(str[cursor]);
		cursor++;
	}
}
