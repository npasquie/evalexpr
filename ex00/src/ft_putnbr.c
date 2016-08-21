/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 14:48:50 by npasquie          #+#    #+#             */
/*   Updated: 2016/08/21 04:16:27 by npasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	shorter_ft_putnbr(int *nb)
{
	if (*nb < 0)
	{
		ft_putchar('-');
		*nb = *nb * -1;
	}
	if (*nb == -2147483648)
	{
		ft_putstr("214748364");
		*nb = 8;
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	char	c;

	shorter_ft_putnbr(&nb);
	if (nb == 0)
		ft_putchar('0');
	else
	{
		i = 1000000000;
		while (i > 0)
		{
			if (i <= nb)
			{
				if (i != 1000000000)
					c = (((nb % (i * 10)) - (nb % i)) / i) + 48;
				else
					c = (nb / i) + 48;
				ft_putchar(c);
			}
			i = i / 10;
		}
	}
}
