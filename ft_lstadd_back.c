/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 14:49:22 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/29 15:35:32 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last_node = ft_lstlast(*lst);
	last_node->next = new;
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	t_list	*node5;
	t_list	*node6;
	char	*str1 = "Mit";
	char	*str2 = "dir";
	char	*str3 = "sind";
	char	*str4 = "wir";
	char	*str5 = "vier";
	char	*str6 = "oder?";

	node1 = ft_lstnew(str1);
	node2 = ft_lstnew(str2);
	node3 = ft_lstnew(str3);
	node4 = ft_lstnew(str4);
	node5 = ft_lstnew(str5);
	node6 = ft_lstnew(str6);
	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = NULL;
	ft_lstadd_back(&head, node6);
	printf("The last node is [%s]\n", (char *)ft_lstlast(head)->content);
	printf("Last node address: %p\n", (void *)ft_lstlast(head));
}*/
//Imagine: Variable head lives at address 3000, 
//but head = 5000,
//&head = 300,
//the node pointed to by head is 5000
//t_list *lst when I only need to read/traverse the list
//"Here is the first node"
//t_list **lst when I need to change the pointer itself
//"Here is the variable that stores where the first node is"
//Read nodes through *lst
//Modify the head pointer through *lst = ...
