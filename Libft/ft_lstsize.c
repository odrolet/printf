/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <oldrolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:38:02 by oldrolet          #+#    #+#             */
/*   Updated: 2023/02/02 13:50:28 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list	*lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*#include<stdio.h>

int main()
{	
	char test[] = "test-test-test1";
	t_list	*struc;
	t_list **testt;
	testt = &struc;
	t_list *hhhh = *testt;
	
	printf("%d          5\n", ft_lstsize(hhhh));
}*/
