/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tet.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 17:12:17 by savram            #+#    #+#             */
/*   Updated: 2016/01/22 17:17:08 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "fillit.h"

static void		nu_neigbor(t_tet *t, int *pct, int i, int j)
{
	if (t->btet[i][j] >= 'A' && t->btet[i][j] <= 'Z')
	{
		if (i > 0 && t->btet[i][j] == t->btet[i - 1][j])
			*pct += 1;
		if (i < 3 && t->btet[i][j] == t->btet[i + 1][j])
			*pct += 1;
		if (j > 0 && t->btet[i][j] == t->btet[i][j - 1])
			*pct += 1;
		if (j < 3 && t->btet[i][j] == t->btet[i][j + 1])
			*pct += 1;
	}
}

int				ft_check_tet(t_tet *t)
{
	int			i;
	int			j;
	int			pct;

	i = 0;
	pct = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			nu_neigbor(t, &pct, i, j);
			j++;
		}
		i++;
	}
	if (pct < 6)
		return (-1);
	return (0);
}
