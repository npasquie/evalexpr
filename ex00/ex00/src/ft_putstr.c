/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 11:33:29 by npasquie          #+#    #+#             */
/*   Updated: 2016/08/15 14:25:15 by npasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		cursor;

	cursor = 0;
	while (str[cursor] != '\0')
	{
		ft_putchar(str[cursor]);
		cursor++;
	}
}
