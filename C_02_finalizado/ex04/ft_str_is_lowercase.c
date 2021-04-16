/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:48:00 by mavinici          #+#    #+#             */
/*   Updated: 2021/04/08 18:12:33 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int result;

	result = 1;
	while (*str != '\0')
	{
		if (*str < 97 || *str > 122)
			result = 0;
		str++;
	}
	return (result);
}
