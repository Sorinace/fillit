/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initial.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 17:24:17 by savram            #+#    #+#             */
/*   Updated: 2016/01/22 17:25:15 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_initial(t_sq *sq)
{
	int		i;
	int		j;

	i = 0;
	while (i < 13)
	{
		j = 0;
		while (j < 13)
		{
			sq->s[i][j] = '.';
			j++;
		}
		i++;
	}
	sq->d = 0;
	sq->tot = 0;
}