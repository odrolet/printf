/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <oldrolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 10:49:19 by oldrolet          #+#    #+#             */
/*   Updated: 2023/02/16 12:37:00 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

/* %[$][flags][width][.precision][length modifier]conversion */

int	ft_format_specifier(va_list args, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'p')
	{
		write (1, "0x", 2);
		return (2 + ft_ptr(va_arg(args, unsigned long int)));
	}
	if (c == 'd' || c == 'i')
		return (ft_putnbr_num(va_arg(args, int)));
	if (c == 'u')
		return (ft_putnbr_unsnum(va_arg(args, unsigned int)));
	if (c == 'x' || c == 'X')
		return (ft_hexadecimal(va_arg(args, unsigned int), c));
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			i;
	size_t		len;

	i = 0;
	len = 0;
	if (!format)
		return (0);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len = len + ft_format_specifier(args, format[i + 1]);
			i++;
		}
		else
		{
			len = len + ft_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}
