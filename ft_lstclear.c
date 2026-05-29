/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 17:18:46 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/29 18:03:21 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		next_node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_node;
	}
	*lst = NULL;
}
/*
//While nodes still exist:
//Remember where the next node is
//Delete current node
//Move to remembered next node
//Dereferencing once: *lst is the value stored inside head
//which is the address of node A
//so *lst is like "current node"
//lst - t_list ** - address of head
// *lst - t_list * - the node head points to

void	del(void *content)
{
	(void)content;
}

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew("Here");
	node2 = ft_lstnew("we");
	node3 = ft_lstnew("go");
	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	printf("Before clear:\n");
	printf("List size = %d\n", ft_lstsize(head));
	printf("First node = %s\n", (char *)head->content);
	ft_lstclear(&head, del);
	printf("\nAfter clear:\n");
	printf("Head address = %p\n", (void *)head);
	printf("List size = %d\n", ft_lstsize(head));
	return (0);
}*/
