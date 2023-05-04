/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <oldrolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:08:19 by oldrolet          #+#    #+#             */
/*   Updated: 2023/01/20 13:10:09 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t	size)
{
	size_t	src_len;
	size_t	temp;

	src_len = ft_strlen(src);
	if (!dest || size == 0)
		return (src_len);
	if (src_len < size)
		temp = src_len;
	else
		temp = size - 1;
	ft_memcpy(dest, src, temp);
	dest[temp] = '\0';
	return (src_len);
}
