/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load_tet.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 17:28:35 by savram            #+#    #+#             */
/*   Updated: 2016/01/22 17:30:04 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "fillit.h"

int			ft_load_tet(int *i, t_tet *tet, char *f_ch)
{
	int		j;
	int		k;

	j = 0;
	if (ft_check_buf(f_ch) < 0)
		return (-1);
	while (j < 4)
	{
		k = 0;
		while (k < 4)
		{
			if (f_ch[j * 5 + k] == '#')
				f_ch[j * 5 + k] = 'A' + *i;
			tet->btet[j][k] = f_ch[j * 5 + k];
			k++;
		}
		j++;
	}
	tet->x = 4;
	tet->y = 4;
	if (ft_check_tet(tet) < 0)
		return (-2);
	*i += 1;
	return (0);
}
