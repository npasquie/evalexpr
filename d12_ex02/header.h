/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 16:30:38 by npasquie          #+#    #+#             */
/*   Updated: 2016/08/24 11:24:04 by npasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# define MISSING_FILE_NAME -1
# define INVALID_OFFSET -2
# define CANNOT_OPEN -3

int				ft_valid_nbr(char **av, int *nb_c);
void			ft_printtail(int ac, char *file_name, int nb_c, int i);
void			ft_putstr(char *str);
void			ft_err_putstr(char *str);
int				ft_file_length(char *file_name);
int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_err_putchar(char c);
typedef struct	s_errno
{
	int			main;
	int			printtail;
	int			file_length;
	int			valid_nbr;
}				t_errno;
t_errno			g_errno;
typedef struct	s_norme
{
	char	c;
	int		j;
	int		length;
	int		fd;
	int		nb_c;
}				t_norme;

#endif
