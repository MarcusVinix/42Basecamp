/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 23:17:52 by mavinici          #+#    #+#             */
/*   Updated: 2021/04/07 23:21:20 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int result;

	result = 1;
	while (*str != '\0')
	{
		if (*str < 32 || *str > 127)
			result = 0;
		str++;
	}
	return (result);
}
