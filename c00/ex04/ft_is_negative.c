/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htoulni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 19:22:51 by htoulni           #+#    #+#             */
/*   Updated: 2020/09/12 19:22:54 by htoulni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if(n >=0)
		ft_putchar('P');
	else
		ft_putchar('N');
}

int		main(void)
{
	ft_is_negative(1);
	ft_is_negative(-1);
	ft_is_negative(0);
}