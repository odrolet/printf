/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <oldrolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:14:30 by oldrolet          #+#    #+#             */
/*   Updated: 2023/02/15 20:26:39 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_check_len(unsigned int decimal)
{
	unsigned int	i;

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

int	ft_hexadecimal(unsigned int decimal, char c)
{
	int	len;

	if (decimal >= 16)
		ft_hexadecimal(decimal / 16, c);
	if (c == 'x')
		write(1, &"0123456789abcdef"[decimal % 16], 1);
	if (c == 'X')
		write(1, &"0123456789ABCDEF"[decimal % 16], 1);
	len = ft_check_len(decimal);
	return (len);
}
