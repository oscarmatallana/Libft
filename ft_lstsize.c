/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 16:44:31 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/28 20:13:56 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	t_list	*node_visitor;
	int		node_counter;

	node_counter = 0;
	node_visitor = lst;
	while (node_visitor != NULL)
	{
		node_counter++;
		node_visitor = node_visitor->next;
	}
	return (node_counter);
}
/* //Goal: Move through the list node by node, using next pointers
//HEAD
// -> [Mit]
//  -> [dir]
//   -> [sind]
//    -> [wir]
//     -> [vier]
//      -> NULL
//the function counts 5 nodes
//I'm counting nodes, not the NULL*/
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
	printf("Number of nodes is %d", ft_lstsize(head));
}*/
