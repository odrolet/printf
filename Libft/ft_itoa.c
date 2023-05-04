/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <oldrolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:26:03 by oldrolet          #+#    #+#             */
/*   Updated: 2023/02/02 10:24:40 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

//2147483647, -2147483648

static unsigned int	ft_sign(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

static unsigned int	ft_check_longueur(int nb)
{
	unsigned int	res;

	if (nb < 0)
		res = nb * -1;
	else
		res = nb;
	if (res > 1000000000)
		return (10);
	else if (res >= 100000000)
		return (9);
	else if (res >= 10000000)
		return (8);
	else if (res >= 1000000)
		return (7);
	else if (res >= 100000)
		return (6);
	else if (res >= 10000)
		return (5);
	else if (res >= 1000)
		return (4);
	else if (res >= 100)
		return (3);
	else if (res >= 10)
		return (2);
	return (1);
}

char	*ft_itoa(int nb)
{
	char			*res;
	unsigned int	len;
	long int		n;

	n = (long int)nb;
	len = ft_check_longueur(nb) + ft_sign(nb);
	res = (char *)malloc(sizeof(char) * len + 1);
	if (res == NULL)
		return (NULL);
	if (n < 0)
		n = n * -1;
	res[len] = '\0';
	len--;
	if (n == 0)
		res[len] = '0';
	while (len >= 0 && n > 0)
	{
		res[len] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	if (ft_sign(nb) == 1)
		res[len] = '-';
	return (res);
}

/*int main()
{
	printf("%s", ft_itoa(-2147483648));
}*/
