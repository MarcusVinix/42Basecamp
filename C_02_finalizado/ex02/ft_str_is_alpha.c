/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:02:23 by mavinici          #+#    #+#             */
/*   Updated: 2021/04/09 15:41:02 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int result;

	result = 1;
	while (*str != '\0')
	{
		if (*str < 65 || *str > 90)
			if (*str < 97 || *str > 122)
				result = 0;
		str++;
	}
	return (result);
}
