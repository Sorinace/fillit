/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 17:51:25 by savram            #+#    #+#             */
/*   Updated: 2016/01/22 17:53:28 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "fillit.h"

int			ft_error(int argc, char **argv, t_tet *tet)
{
	if (argc != 2)
	{
		write(1, "usage: fillit imput_file\n", 25);
		return (-2);
	}
	if (ft_get_tet(argv[1], tet) < 0)
	{
		write(1, "error\n", 6);
		return (-1);
	}
	return (0);
}

int			main(int argc, char **argv)
{
	t_tet	tet[27];
	t_sq	*sq;
	t_sq	*fin;
	int		nr;

	if (ft_error(argc, argv, tet) < 0)
		return (0);
	ft_optim(tet);
	sq = NULL;
	fin = NULL;
	sq = (t_sq*)malloc(sizeof(t_sq));
	if (sq)
		ft_initial(sq);
	fin = (t_sq*)malloc(sizeof(t_sq));
	if (fin)
		fin->d = 13;
	nr = ft_number(tet);
	ft_back_co(tet, sq, fin, nr);
	ft_print(fin);
	return (0);
}
