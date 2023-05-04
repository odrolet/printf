/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <oldrolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:10:34 by oldrolet          #+#    #+#             */
/*   Updated: 2023/02/01 17:03:06 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	while (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
	return ;
}

/*void  fonctiontest(void *res)
{
  char *result;
  result = res;
  if (result[13] == '-')
  {
      result[13] = 'E';
      printf ("\n\nerreur\n\n");
  }
  else
      result[13] = '-';
}
int       main(void)
{
  char test[] = "test-test-test1";
  t_list *struc = ft_lstnew(test);
  t_list **testt;
  testt = &struc;
  char test2[] = "test-test-test2";
  t_list *struc2 = ft_lstnew(test2);
  ft_lstadd_front(testt, struc2);
  char test3[] = "test-test-test3";
  t_list *struc3 = ft_lstnew(test3);
  ft_lstadd_front(testt, struc3);
  char test4[] = "test-test-test4";
  t_list *struc4 = ft_lstnew(test4);
  ft_lstadd_front(testt, struc4);
  char test5[] = "test-test-test5";
  t_list *struc5 = ft_lstnew(test5);
  t_list *hhhh = *testt;
  printf("%s      4\n", hhhh->content);
  printf("%s      3\n", hhhh->next->content);
  printf("%s      2\n", hhhh->next->next->content);
  printf("%s      1\n", hhhh->next->next->next->content);
  printf("size:%d\n", ft_lstsize(hhhh));
  printf("%s      1\n",ft_lstlast(hhhh)->content);
  ft_lstadd_back(testt,struc5);
  printf("\n%s        4\n", hhhh->content);
  printf("%s      3\n", hhhh->next->content);
  printf("%s      2\n", hhhh->next->next->content);
  printf("%s      1\n", hhhh->next->next->next->content);
  printf("%s      5\n", hhhh->next->next->next->next->content);
  printf("%d          5\n",ft_lstsize(hhhh));
  ft_lstiter(hhhh,fonctiontest);
  printf("\n%s    -4\n", hhhh->content);
  printf("%s      -3\n", hhhh->next->content);
  printf("%s      -2\n", hhhh->next->next->content);
  printf("%s      -1\n", hhhh->next->next->next->content);
  printf("%s      -5\n", hhhh->next->next->next->next->content);
}*/