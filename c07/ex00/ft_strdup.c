/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 20:25:33 by mavinici          #+#    #+#             */
/*   Updated: 2021/04/16 00:42:51 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *copy;
	int lengh;

	lengh = 0;
	while (src[lengh])
		lengh++;
	copy = malloc(lengh * sizeof(char) + 1);
	if (copy == NULL)
		return (0);
	else
		lengh = 0;
		while (src[lengh])
		{
			copy[lengh] = src[lengh];
			lengh++;
		}
		copy[lengh] = '\0';
		return (copy);
}
