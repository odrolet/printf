/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <oldrolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:48:30 by oldrolet          #+#    #+#             */
/*   Updated: 2023/01/23 12:17:00 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nouv;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	nouv = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (nouv == NULL)
		return (NULL);
	while (s1[i])
	{
		nouv[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		nouv[i + j] = s2[j];
		j++;
	}
	nouv[i + j] = '\0';
	return (nouv);
}

/*int	main()
{
	char s1[] = "my favorite animal is";
	char s2[] = " ";

	printf("%s", ft_strjoin(s1, s2));
	
}*/
