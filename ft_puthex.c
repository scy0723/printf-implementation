/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chashin <chashin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:36:54 by chashin           #+#    #+#             */
/*   Updated: 2022/10/27 18:53:46 by chashin          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	digit_hexa(unsigned long long nb)
{
	int	i;

	i = 1;
	while (nb >= 16)
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}

void	putnbr_base(unsigned long long nb, char *base)
{
	if (nb >= 16)
		putnbr_base((nb / 16), base);
	ft_putchar(base[nb % 16]);
}

int	ft_puthex(int i, char x)
{
	char			*base;
	int				sum;
	unsigned int	c;

	if (x == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	sum = 0;
	c = (unsigned int)i;
	putnbr_base(c, base);
	sum += digit_hexa(c);
	return (sum);
}

int	ft_putpointer(unsigned long long l)
{
	char	*base;
	int		sum;

	base = "0123456789abcdef";
	sum = 0;
	putnbr_base(l, base);
	sum += digit_hexa(l);
	return (sum);
}
