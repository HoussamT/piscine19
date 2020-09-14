/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htoulni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 17:00:42 by htoulni           #+#    #+#             */
/*   Updated: 2020/09/13 17:00:51 by htoulni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_fill(int x, int y)
{
	ft_putchar(48 + x / 10);
	ft_putchar(48 + x % 10);
	ft_putchar(' ');
	ft_putchar(48 + y / 10);
	ft_putchar(48 + y % 10);
	if (x != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_fill(a, b);
			b++;
		}
		a++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
