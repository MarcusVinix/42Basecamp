/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 00:51:05 by mavinici          #+#    #+#             */
/*   Updated: 2021/04/16 01:39:35 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int size;
	int i;
	int *array;

	size = max - min;
	if (size <= 0)
		return (0);
	array = malloc(size * sizeof(int));
	if(array == NULL)
			return (0);
	else
	{
		i = 0;
		while (i < size)
		{
			array[i] = min;
			i++;
			min++;
		}
		return (array);
	}
}