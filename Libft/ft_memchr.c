/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <oldrolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:48:21 by oldrolet          #+#    #+#             */
/*   Updated: 2023/02/01 17:20:37 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long int		i;
	unsigned char			*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	if (s == NULL)
		return (NULL);
	while (i < n)
	{
		if (*ptr == ((unsigned char)c))
			return (ptr);
		i++;
		ptr++;
	}
	return (NULL);
}

/*int main()
{
	char	str1[] = "bonjour";
	int		c;
	size_t	n;

	c = 'j';
	printf("%s\n", ft_memchr(str1, c, 16));
	printf("%s\n", memchr(str1, c, 16));
}*/