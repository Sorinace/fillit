/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 17:30:31 by savram            #+#    #+#             */
/*   Updated: 2016/01/22 17:31:38 by savram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_max(int a, int b, int c)
{
	int		temp;

	if (a > b)
		temp = a;
	else
		temp = b;
	if (temp > c)
		return (temp);
	else
		return (c);
	return (-1);
}
