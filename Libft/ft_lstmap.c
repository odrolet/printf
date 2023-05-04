/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <oldrolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:17:57 by oldrolet          #+#    #+#             */
/*   Updated: 2023/02/08 13:31:02 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*new;
	t_list	*new2;
	void	*temp;

	if (!f || !lst)
		return (NULL);
	new2 = 0;
	while (lst)
	{
		temp = f(lst->content);
		new = ft_lstnew(temp);
		if (new == NULL)
		{
			ft_lstclear(&new, del);
			free(temp);
		}
		ft_lstadd_back(&new2, new);
		lst = lst->next;
	}
	return (new2);
}
