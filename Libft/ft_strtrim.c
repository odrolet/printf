/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <oldrolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:17:50 by oldrolet          #+#    #+#             */
/*   Updated: 2023/02/02 14:04:12 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*res;

	i = 0;
	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (start <= end && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	res = ft_calloc(sizeof(char), (end - start + 1) + 1);
	if (!res)
		return (NULL);
	while (i < (end - start + 1))
	{
		res[i] = s1[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*#include<stdio.h>

int main()
{
    char str[] = "          geeksforgeeks";
 
    char str1[] = " ";
 
    printf("%s", ft_strtrim(str, str1));
	
    return 0;
}*/