/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htoulni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 17:00:21 by htoulni           #+#    #+#             */
/*   Updated: 2020/09/13 17:00:24 by htoulni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int n;
	
	if (nb < 0)
	{
		ft_putchar('-');
		n =  -nb;
	}
	else
		n = nb;
	
	if(n > 9)
	{
		ft_putnbr(n / 10);
		n = n % 10;
	}
	ft_putchar(n + 48);
}

int		main(void)
{
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(4242);
	ft_putchar('\n');
	ft_putnbr(20000706);
	ft_putchar('\n');
	ft_putnbr(+2147483647);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
}
