/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabramov <mabramov@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:45:16 by mabramov          #+#    #+#             */
/*   Updated: 2021/04/03 20:46:02 by mabramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		i1;
	int		i2;

	i1 = 1;
	while (i1 <= y)
	{
		i2 = 1;
		while (i2 <= x)
		{
			if ((i2 == 1 && i1 == 1) || (i2 == x && i1 == 1))
				ft_putchar('A');
			else if ((i2 == x && i1 == y) || (i2 == 1 && i1 == y))
				ft_putchar('C');
			else if ((i2 > 1 && i2 < x) && (i1 == 1 || i1 == y))
				ft_putchar('B');
			else if ((i1 > 1 && i1 < y) && (i2 == 1 || i2 == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			i2++;
		}
		ft_putchar('\n');
		i1++;
	}
}
