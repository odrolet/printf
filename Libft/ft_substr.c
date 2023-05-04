/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <oldrolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:36:08 by oldrolet          #+#    #+#             */
/*   Updated: 2023/01/31 15:35:06 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	nouv_len;
	char	*dest;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	nouv_len = ft_strlen(s);
	if (ft_strlen(s) < start + len)
		len = nouv_len - start;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s + start, len + 1);
	return (dest);
}

/*int main(void)
{
	char	c[] = "bonjour";
	unsigned int a = 2;
	unsigned int b = 5;
	
	printf("%s", ft_substr(c, a, b));
}*/