/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <oldrolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:21:40 by oldrolet          #+#    #+#             */
/*   Updated: 2023/02/16 12:36:09 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}

int	ft_putnbr_num(int num)
{
	int	size;

	size = 0;
	ft_putnbr(num, &size);
	return (size);
}

void	ft_putnbr(int nb, int *size)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		*size = 11;
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		*size += 1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10, size);
		ft_putchar(nb % 10 + '0');
		*size += 1;
	}
	if (nb <= 9)
	{
		ft_putchar(nb + '0');
		*size += 1;
	}
	return ;
}
