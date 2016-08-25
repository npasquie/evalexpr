/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printtail.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 16:40:32 by npasquie          #+#    #+#             */
/*   Updated: 2016/08/24 18:59:21 by npasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void			ft_normeone(t_norme var, int ac, char *file_name, int i)
{
	if (ac > 4)
	{
		write(1, "==> ", 4);
		ft_putstr(file_name);
		write(1, " <==\n", 5);
	}
	var.fd = open(file_name, O_RDONLY);
	while (var.j < var.nb_c - 1 && var.j < var.length)
	{
		read(var.fd, &(var.c), 1);
		var.j++;
	}
	while (read(var.fd, &var.c, 1))
		write(1, &var.c, 1);
	close(var.fd);
	if (i != ac - 1)
		ft_putchar('\n');
}

void			ft_normetwo(t_norme var, int ac, char *file_name, int i)
{
	if (ac > 4)
	{
		write(1, "==> ", 4);
		ft_putstr(file_name);
		write(1, " <==\n", 5);
	}
	if (var.nb_c != 0)
	{
		var.fd = open(file_name, O_RDONLY);
		while (var.j < var.length - var.nb_c)
		{
			read(var.fd, &var.c, 1);
			var.j++;
		}
		while (read(var.fd, &var.c, 1))
			write(1, &var.c, 1);
		close(var.fd);
	}
	if (i <= ac - 2)
		ft_putchar('\n');
}

void			ft_printtail(int ac, char *file_name, int nb_c, int i)
{
	t_norme		var;

	var.nb_c = nb_c;
	var.j = 0;
	if (!(g_errno.main))
	{
		var.length = ft_file_length(file_name);
		if (0 != g_errno.file_length)
		{
			write(2, "tail : ", 7);
			ft_err_putstr(file_name);
			write(2, ": No such file or directory\n", 28);
		}
		else if (g_errno.valid_nbr == 5)
			ft_normeone(var, ac, file_name, i);
		else
			ft_normetwo(var, ac, file_name, i);
	}
}
