/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <oldrolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:00:09 by oldrolet          #+#    #+#             */
/*   Updated: 2023/02/16 12:46:14 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int main()
{
	char	*str = NULL;

	ft_printf("char:%c\n", 'c');
	printf("vchar:%c\n", 'c');
	ft_printf("char * : %s\n", "bonjour");
	printf("vchar * : %s\n", "bonjour");
	ft_printf("pointeur :%p\n", str);
	printf("pointeur :%p\n", str);
	ft_printf("hexa: %x\n", -125);
	printf("vhexa:%x\n", -125);
	ft_printf("HEXA:%X\n", 125);
	printf("vHEXA:%X\n", 125);
	ft_printf(NULL);
}
