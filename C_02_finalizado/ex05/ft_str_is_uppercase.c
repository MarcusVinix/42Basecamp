/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 23:05:14 by mavinici          #+#    #+#             */
/*   Updated: 2021/04/08 19:06:29 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int result;

	result = 1;
	while (*str != '\0')
	{
		if (*str < 65 || *str > 90)
			result = 0;
		str++;
	}
	return (result);
}
