/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 17:07:52 by savram            #+#    #+#             */
/*   Updated: 2016/01/22 17:09:20 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_check_add(int i, int j, t_tet t, t_sq *f)
{
	int		a;
	int		b;

	b = 0;
	while (b < t.y)
	{
		a = 0;
		while (a < t.x)
		{
			if (f->s[j + b][i + a] != '.' && t.btet[b][a] != '.')
				return (-1);
			a++;
		}
		b++;
	}
	return (ft_max(f->d, i + t.x, j + t.y));
}
