/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 18:08:55 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/29 18:24:05 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
//Visit every node in the list
//and apply a function to its content
//Why is the parameter t_list *lst and not t_list **lst?
//Because ft_lstiter does not need to change the head

void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	t_list	*node5;

	node1 = ft_lstnew("Mit");
	node2 = ft_lstnew("dir");
	node3 = ft_lstnew("sind");
	node4 = ft_lstnew("wir");
	node5 = ft_lstnew("vier");
	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = NULL;
	printf("Printing list with ft_lstiter:\n");
	ft_lstiter(head, print_content);
	return (0);
}*/
