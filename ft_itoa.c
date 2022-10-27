/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chashin <chashin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:19:50 by chashin           #+#    #+#             */
/*   Updated: 2022/10/27 18:54:01 by chashin          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long	digit(long n)
{
	int	i;

	i = 1;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	putnbr(long n)
{
	if (n > 9)
		putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	ft_uitoa(int n)
{
	unsigned int	u;
	int				size;

	size = 0;
	u = (unsigned int)n;
	size += digit(u);
	putnbr(u);
	return (size);
}

int	ft_itoa(int n)
{
	long	l;
	int		size;

	size = 0;
	l = n;
	if (l < 0)
	{
		ft_putchar('-');
		l *= -1;
		size += 1;
	}
	size += digit(l);
	putnbr(l);
	return (size);
}
