/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 13:07:20 by mavinici          #+#    #+#             */
/*   Updated: 2021/04/12 01:30:04 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		size_src(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	size_of_src;
	unsigned int	i;

	size_of_src = size_src(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[size_of_src + i] = src[i];
		i++;
	}
	dest[size_of_src + i] = '\0';
	return (dest);
}
