/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <oldrolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:30:15 by oldrolet          #+#    #+#             */
/*   Updated: 2023/02/02 13:58:13 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;
	int		i;
	int		n;

	s = (char *)str;
	i = 0;
	n = 0;
	while (str[i])
	{
		i++;
		s++;
	}
	while (n++ <= i)
	{
		if (*s-- == (char)c)
			return (++s);
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int main () {
   int len;
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   ret = ft_strrchr(str, ch);
   printf("String after |%c| is - |%s|\n", ch, ret);
   return(0);
}*/