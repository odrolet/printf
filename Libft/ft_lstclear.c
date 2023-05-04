/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <oldrolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:38:53 by oldrolet          #+#    #+#             */
/*   Updated: 2023/02/01 12:54:28 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*actu;

	if (!lst || !del)
		return ;
	actu = *lst;
	while (actu)
	{
		temp = actu->next;
		del(actu->content);
		free(actu);
		actu = temp;
	}
	*lst = NULL;
}
