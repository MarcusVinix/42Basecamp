/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 01:22:52 by mavinici          #+#    #+#             */
/*   Updated: 2021/04/15 13:35:10 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*temp;
	int		len;

	len = argc - 1;
	i = 1;
	while (argv[i] != '\0' && len >= 1)
	{
		temp = argv[len];
		while (*temp != '\0')
		{
			write(1, temp, 1);
			temp++;
		}
		write(1, "\n", 1);
		len--;
	}
	return (0);
}
