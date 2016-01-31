/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 16:31:10 by savram            #+#    #+#             */
/*   Updated: 2016/01/22 16:50:49 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

typedef struct	s_tet
{
	int			x;
	int			y;
	char		btet[4][4];
}				t_tet;

typedef struct	s_sq
{
	int			tot;
	int			d;
	char		s[13][13];
}				t_sq;

typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;

int				ft_get_tet(char *f_name, t_tet *tet);
int				ft_load_tet(int *i, t_tet *tet, char *f_ch);
int				ft_check_buf(char *f_ch);
int				ft_check_tet(t_tet *t);
void			ft_optim (t_tet *t);
void			ft_initial (t_sq *sq);
void			ft_clone (t_sq *f, t_sq *sq, int n);
int				ft_is_taken (t_sq *f, t_tet t);
void			ft_add(t_sq *f, t_tet t);
t_sq			*ft_min (t_sq *fin, t_sq *temp);
t_sq			*ft_back_co (t_tet *t, t_sq *sq, t_sq *fin, int nr);
int				ft_check_add(int i, int j, t_tet t, t_sq *f);
void			ft_write (t_sq *f, t_tet t, t_point p, int min);
int				ft_max (int a, int b, int c);
void			ft_print (t_sq *f);
int				ft_number(t_tet *t);
void			ft_move_left (t_tet *t, int *ok);
void			ft_move_up (t_tet *t, int *ok);
#endif
