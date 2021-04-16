/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:51:55 by mavinici          #+#    #+#             */
/*   Updated: 2021/04/14 23:30:47 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAX_SQRT 46341

int	ft_sqrt(int nb)
{
	int mid_nb;
	int count;

	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	mid_nb = nb / 2;
	count = 0;
	while (count <= mid_nb && count < MAX_SQRT)
	{
		if ((count * count) == nb)
			return (count);
		count++;
	}
	return (0);
}
