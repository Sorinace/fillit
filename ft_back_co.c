/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_back_co.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 18:00:50 by savram            #+#    #+#             */
/*   Updated: 2016/01/22 18:02:02 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "fillit.h"

static int	ft_end(int d, int nr)
{
	int		i;

	i = 4;
	while (nr * 4 > i * i)
		i++;
	if (d <= i)
		return (1);
	return (0);
}

t_sq		*ft_back_co(t_tet *t, t_sq *sq, t_sq *fin, int nr)
{
	t_sq	*f;
	int		i;

	f = NULL;
	f = (t_sq*)malloc(sizeof(t_sq));
	if (f)
		ft_clone(f, sq, 13);
	i = 0;
	while (t[i].x != -1)
	{
		if (ft_is_taken(f, t[i]) == 0)
		{
			ft_add(f, t[i]);
			if (ft_back_co(t, f, fin, nr) == NULL)
				return (NULL);
			ft_clone(f, sq, 13);
		}
		i++;
	}
	if (nr == f->tot)
		fin = ft_min(fin, f);
	if (ft_end(fin->d, nr))
		return (NULL);
	return (f);
}
