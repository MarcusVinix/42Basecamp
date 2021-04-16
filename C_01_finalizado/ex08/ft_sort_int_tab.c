/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:47:36 by mavinici          #+#    #+#             */
/*   Updated: 2021/04/07 17:13:19 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	index2;

	index = -1;
	while (++index < size)
	{
		index2 = -1;
		while (++index2 < size - index - 1)
		{
			if (tab[index2] > tab[index2 + 1])
				ft_swap(&tab[index2], &tab[index2 + 1]);
		}
	}
}
