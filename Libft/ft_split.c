/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <oldrolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:12:43 by oldrolet          #+#    #+#             */
/*   Updated: 2023/02/09 18:16:22 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

static int	ft_nomb_str(const char *str, char c)
{
	size_t	i;
	int		num;

	i = 0;
	num = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i])
			num++;
		while (str[i] != c && str[i])
			i++;
	}
	return (num);
}

static void	*ft_free(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	last_pos;
	unsigned int	i;
	int				k;
	char			**tab;

	tab = ft_calloc(sizeof(char *), (ft_nomb_str(s, c) + 1));
	if (!tab || !s)
		return (NULL);
	i = 0;
	k = 0;
	while (k < (ft_nomb_str(s, c)))
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			last_pos = i;
		while (s[i] && s[i] != c)
			i++;
		tab[k] = ft_substr(s, last_pos, (i - last_pos));
		if (!tab[k])
			return (ft_free(tab));
		k++;
	}
	return (tab);
}

/*int	main(void)
{
	char	c[] = "hello";
	char	u = ' ';
	char	**p;

	p = ft_split(c, u);
	printf("%s\n", p[0]);
	printf("%s\n", p[1]);
	printf("%s\n", p[2]);
}*/
