/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 18:24:07 by mavinici          #+#    #+#             */
/*   Updated: 2021/04/04 19:01:51 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int c;
	int l;

	l = 0;
	while (l < y)
	{
		c = 0;
		while (c < x)
		{
			if (l == 0 || l == y - 1)
				if (c == 0 || c == x - 1)
					ft_putchar('o');
				else
					ft_putchar('-');
			else if (c == 0 || c == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			c++;
		}
		l++;
		ft_putchar('\n');
	}
}
