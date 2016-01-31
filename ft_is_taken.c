/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_taken.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 17:26:15 by savram            #+#    #+#             */
/*   Updated: 2016/01/22 17:28:06 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		ft_get_ch(t_tet t)
{
	int		i;

	i = 0;
	while (i < t.x)
	{
		if (t.btet[0][i] != '.')
			return (t.btet[0][i]);
		i++;
	}
	return ('.');
}

int			ft_is_taken(t_sq *f, t_tet t)
{
	char	c;
	int		i;
	int		j;

	c = ft_get_ch(t);
	i = 0;
	while (i < f->d)
	{
		j = 0;
		while (j < f->d)
		{
			if (f->s[i][j] == c)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
