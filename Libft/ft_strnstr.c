/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <oldrolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:10:47 by oldrolet          #+#    #+#             */
/*   Updated: 2023/01/18 13:07:09 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;
	char	*n;

	i = 0;
	h = (char *)haystack;
	n = (char *)needle;
	if (n[0] == '\0')
		return (h);
	while (h[i] && i < len)
	{
		j = 0;
		if (h[i] == n[0])
		{
			while (h[i + j] == n[j] && (i + j) < len)
			{
				j++;
				if (n[j] == '\0')
					return (&h[i]);
			}
		}
		i++;
	}
	return (NULL);
}

/*int main()
{
	char	a[] = "bonjour tous le monde";
	char	b[] = "tous";

	printf("%s\n", ft_strnstr(a, b, 4));
	printf("%s\n", strnstr(a, b, 4));
}*/
