/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 03:06:34 by npasquie          #+#    #+#             */
/*   Updated: 2016/08/21 19:37:00 by npasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>

void			ft_calc(int cursor, char *str);
void			ft_insert_nb(int pos1, int pos2, char *str, int result);
void			ft_parenthesis(int cursor, char *str);
int				ft_add(int nb1, int nb2);
int				ft_sub(int nb1, int nb2);
int				ft_mul(int nb1, int nb2);
int				ft_div(int nb1, int nb2);
int				ft_mod(int nb1, int nb2);
int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
int				eval_expr(char *str);
void			ft_rm_parenth(int cursor, char *str);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strdup(char *src);

typedef struct	s_opp
{
	char		*operatorr;
	int			(*ptr_fonctt)(int, int);
}				t_opp;

typedef struct	s_calc
{
	int			i;
	int			nb1;
	int			nb2;
	int			pos1;
	int			pos2;
	int			j;
	int			result;
	int			(*ptrfonct)(int, int);
}				t_calc;

#endif
