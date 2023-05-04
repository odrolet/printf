/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_nbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <oldrolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:39:16 by oldrolet          #+#    #+#             */
/*   Updated: 2023/02/15 17:36:02 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

char	*ft_lowercase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

unsigned int	ft_putnbr_unsnum(unsigned int num)
{
	unsigned int	size;

	size = 0;
	ft_putunsigned_nbr(num, &size);
	return (size);
}

void	ft_putunsigned_nbr(unsigned int nb, unsigned int *size)
{
	if (nb > 9)
	{
		ft_putunsigned_nbr(nb / 10, size);
		ft_putchar(nb % 10 + '0');
		*size += 1;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		*size += 1;
	}
	return ;
}
