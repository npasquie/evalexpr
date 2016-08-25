/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_length.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 23:29:17 by npasquie          #+#    #+#             */
/*   Updated: 2016/08/24 10:52:18 by npasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_file_length(char *file_name)
{
	int		fd;
	char	c;
	int		i;

	i = 0;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		g_errno.file_length = -3;
		return (0);
	}
	while (read(fd, &c, 1))
		i++;
	return (i);
}
