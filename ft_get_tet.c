/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_tet.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 17:21:28 by savram            #+#    #+#             */
/*   Updated: 2016/01/22 17:23:34 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "fillit.h"

int			ft_get_tet(char *f_name, t_tet *tet)
{
	int		f_tet;
	char	f_ch[20];
	int		i;

	f_tet = open(f_name, O_RDONLY);
	if (f_tet < 0)
		return (-1);
	i = 0;
	while (read(f_tet, f_ch, 19) > 0)
	{
		if (ft_load_tet(&i, &tet[i], f_ch) < 0)
			return (-2);
		if (read(f_tet, f_ch, 1) > 0)
			if (f_ch[0] != '\n')
				return (-3);
		if (read(f_tet, f_ch, 1) > 0)
			if (f_ch[0] != '\n')
				return (-4);
	}
	tet[i].x = -1;
	close(f_tet);
	if (f_ch[0] == '\n')
		return (-5);
	return (1);
}
