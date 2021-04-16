/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 01:46:01 by mavinici          #+#    #+#             */
/*   Updated: 2021/04/16 14:51:50 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		len;

	len = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (!(*range = (int *)malloc(sizeof(int) * len)))
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}



//include <stdlib.h>
//
//nt	ft_ultimate_range(int **range, int min, int max)
//
//	int size;
//	int i;
//	int *array;
//
//	if (min >= max)
//	{
//		*range = 0;
//		return (0);
//	}
//	size = max - min;
//	array = malloc(size * sizeof(int));
//	if (array == NULL)
//	{
//		*range = 0;
//		return (-1);
//	}
//	*range = array;
//	i = 0;
//	while (i <= size)
//	{
//		array[i] = min;
//		i++;
//		min++;
//	}
//	return (size);
//
//