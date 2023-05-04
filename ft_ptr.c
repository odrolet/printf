/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <oldrolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:05:09 by oldrolet          #+#    #+#             */
/*   Updated: 2023/02/15 21:11:16 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

/*write(1, &"0123456789abcdef"[num % 16],1)*/

static int	ft_addr_len(unsigned long int decimal)
{
	int	i;

	i = 0;
	if (decimal == 0)
		return (1);
	while (decimal > 0)
	{
		decimal = decimal / 16;
		i++;
	}
	return (i);
}

int	ft_ptr(unsigned long nb)
{
	int	len;

	if (nb >= 16)
	{
		ft_ptr(nb / 16);
		ft_ptr(nb % 16);
	}
	else
	{
		write(1, &"0123456789abcdef"[nb % 16], 1);
	}
	len = ft_addr_len(nb);
	return (len);
}
