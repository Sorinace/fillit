/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 17:46:02 by savram            #+#    #+#             */
/*   Updated: 2016/01/22 17:47:43 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "fillit.h"

void		ft_print(t_sq *f)
{
	int		a;
	int		b;

	if (f == NULL)
		write(1, "*\n", 2);
	a = 0;
	while (a < f->d)
	{
		b = 0;
		while (b < f->d)
		{
			write(1, &f->s[a][b], 1);
			b++;
		}
		write(1, "\n", 1);
		a++;
	}
}
