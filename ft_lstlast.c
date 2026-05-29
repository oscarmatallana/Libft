/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 12:05:00 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/29 14:45:20 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node_visitor;

	node_visitor = lst;
	if (node_visitor == NULL)
		return (node_visitor);
	while (node_visitor->next != NULL)
	{
		node_visitor = node_visitor->next;
	}
	return (node_visitor);
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
	char	*str1 = "Mit";
	char	*str2 = "dir";
	char	*str3 = "sind";
	char	*str4 = "wir";
	char	*str5 = "vier";

	node1 = ft_lstnew(str1);
	node2 = ft_lstnew(str2);
	node3 = ft_lstnew(str3);
	node4 = ft_lstnew(str4);
	node5 = ft_lstnew(str5);
	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = NULL;
	printf("The last node is [%s]\n", (char *)ft_lstlast(head)->content);
	printf("Last node address: %p\n", (void *)ft_lstlast(head));
}*/
