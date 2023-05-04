/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <oldrolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:57:54 by oldrolet          #+#    #+#             */
/*   Updated: 2023/02/20 11:25:04 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "Libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int				ft_printf(const char	*format, ...);
int				ft_hexadecimal(unsigned int decimal, char c);
int				ft_putchar(char c);
int				ft_putstr(char *str);
int				ft_putnbr_num(int num);
void			ft_putnbr(int nb, int *size);
unsigned int	ft_putnbr_unsnum(unsigned int num);
void			ft_putunsigned_nbr(unsigned int nb, unsigned int *size);
int				ft_format_specifier(va_list args, char c);
int				ft_check_len(unsigned int decimal);
char			*ft_lowercase(char	*str);
int				ft_ptr(unsigned long nbr);

#endif