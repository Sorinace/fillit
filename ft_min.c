/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 17:32:37 by savram            #+#    #+#             */
/*   Updated: 2016/01/22 17:34:03 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "fillit.h"

t_sq	*ft_min(t_sq *fin, t_sq *temp)
{
	if (fin == NULL)
		return (temp);
	if (fin->d > temp->d)
		ft_clone(fin, temp, 13);
	free(temp);
	return (fin);
}
