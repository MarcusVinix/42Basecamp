/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:51:01 by mavinici          #+#    #+#             */
/*   Updated: 2021/04/14 23:32:01 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int counter;
	int is_prime;

	if (nb <= 1)
		return (0);
	counter = 2;
	is_prime = 1;
	while (counter < nb)
	{
		if (nb % counter == 0)
		{
			is_prime = 0;
			break ;
		}
		counter++;
	}
	return (is_prime);
}
