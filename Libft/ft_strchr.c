/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <oldrolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:26:42 by oldrolet          #+#    #+#             */
/*   Updated: 2023/01/31 11:40:38 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*ptr;
	size_t	i;
	size_t	j;
	char	ch;

	ch = (char)c;
	ptr = (char *)str;
	i = 0;
	j = ft_strlen(str);
	if (!str)
		return (NULL);
	while (i <= j)
	{
		if (ptr[i] == ch)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
