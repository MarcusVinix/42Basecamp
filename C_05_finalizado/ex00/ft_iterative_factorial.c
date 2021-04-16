/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:57:41 by mavinici          #+#    #+#             */
/*   Updated: 2021/04/15 02:39:44 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;

	if (nb >= 0)
		res = 1;
	else
		res = 0;
	while (nb > 1)
	{
		res *= nb;
		--nb;
	}
	return (res);
}
