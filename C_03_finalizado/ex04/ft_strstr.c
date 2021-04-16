/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 13:25:45 by mavinici          #+#    #+#             */
/*   Updated: 2021/04/16 15:10:12 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int f;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		f = 0;
		while (str[i + f] == to_find[f])
		{
			if (to_find[f + 1] == '\0')
				return (str + i);
			f++;
		}
		i++;
	}
	return (0);
}
