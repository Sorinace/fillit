/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 17:58:34 by savram            #+#    #+#             */
/*   Updated: 2016/01/22 18:05:57 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_in(int temp, int i, int j, t_point *p)
{
	p->x = i;
	p->y = j;
	return (temp);
}

void	ft_add(t_sq *f, t_tet t)
{
	int		min;
	int		i;
	int		j;
	int		temp;
	t_point	p;

	min = 13;
	j = 0;
	while (j < (f->d + t.y))
	{
		i = 0;
		while (i < (f->d + t.x))
		{
			if (min > i + t.x && min > j + t.y)
			{
				temp = ft_check_add(i, j, t, f);
				if (temp > 0 && temp < min)
					min = ft_in(temp, i, j, &p);
			}
			i++;
		}
		j++;
	}
	ft_write(f, t, p, min);
}
