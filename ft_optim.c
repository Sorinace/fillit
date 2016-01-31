/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_optim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 17:41:00 by savram            #+#    #+#             */
/*   Updated: 2016/01/22 17:45:28 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_decision(t_tet *t, int *ok)
{
	int			i;
	int			k;

	k = 0;
	while (t[k].x > 0)
	{
		i = 0;
		while (i < 4)
			if (t[k].btet[0][i++] != '.')
				break ;
		if (i == 4)
			ft_move_up(&t[k], ok);
		i = 0;
		while (i < 4)
			if (t[k].btet[i++][0] != '.')
				break ;
		if (i == 4)
			ft_move_left(&t[k], ok);
		k++;
	}
}

static void		ft_dim_x(t_tet *t)
{
	int			i;
	int			j;
	int			k;

	k = 0;
	while (t[k].x > 0)
	{
		t[k].x = 0;
		j = 0;
		while (j < 4)
		{
			i = 0;
			while (i < 4)
				if (t[k].btet[j][i++] != '.')
					if (t[k].x < i)
						t[k].x = i;
			j++;
		}
		k++;
	}
}

static void		ft_dim_y(t_tet *t)
{
	int			i;
	int			j;
	int			k;

	k = 0;
	while (t[k].x > 0)
	{
		t[k].y = 0;
		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < 4)
				if (t[k].btet[j++][i] != '.')
					if (t[k].y < j)
						t[k].y = j;
			i++;
		}
		k++;
	}
}

void			ft_optim(t_tet *t)
{
	int			ok;

	ok = 1;
	while (ok)
	{
		ok = 0;
		ft_decision(t, &ok);
	}
	ft_dim_x(t);
	ft_dim_y(t);
}
