/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:26:23 by mavinici          #+#    #+#             */
/*   Updated: 2021/04/08 19:04:39 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int result;

	result = 1;
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
			result = 0;
		str++;
	}
	return (result);
}
