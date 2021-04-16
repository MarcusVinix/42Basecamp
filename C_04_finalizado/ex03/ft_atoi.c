/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:11:11 by mavinici          #+#    #+#             */
/*   Updated: 2021/04/13 15:24:13 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ignore(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int sign;
	int numbers;

	sign = 1;
	numbers = 0;
	while (ft_ignore(*str) == 1)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign = sign * -1;
		else
			sign = sign * 1;
	}
	while (*str >= '0' && *str <= '9')
		numbers = numbers * 10 + (*str++ - '0');
	return (numbers * sign);
}
