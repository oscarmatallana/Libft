/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 11:44:13 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/28 16:03:11 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*new1;
	t_list	*new2;
	char	*str1 = "List";
	char	*str2 = "Bucket";
	head = NULL;
	new1 = ft_lstnew(str1);
	new2 = ft_lstnew(str2);
	ft_lstadd_front(&head, new1);
	ft_lstadd_front(&head, new2);
	//[head] -> [new2] = Bucket -> [new1] = List -> NULL
	printf("Address head: %p\n", (char *)head->next);
	printf("Address 1: %p\n", (char *)new2->next);
	printf("Address 2: %p\n", (char *)new1->next);
//	printf("Head node: %s\n", (char *)head->next->content);
	printf("1 node: %s\n", (char *)new2->content);
	printf("2 node: %s\n", (char *)new1->content);
//	printf("Null thing: %p\n", (char *)new1->next);
}*/
/*
//lst is not the list, it is a pointer to the head pointer
//t_list **lst is the address of the head pointer,
//it is a pointer to the pointer variable itself (head pointer)
// *lst is the actual head, head stores [A], so it is [A]
//t_list *new is the new pointer to insert
// *lst = address of A (lst - head - [A])
//Algorithm: 
//- Take the new node,
//- Make it point to current first node
//- Then move head pointer
//- so list starts at new node
//Steps in main:
//Head -> NULL
//new1 = [List, NULL]
//new2 = [Bucket, NULL]
//Head -> new1
//new2 -> [List, NULL]
//Head -> new2 
//In the end: 
//new1 = [List, NULL] (Address 2)
//new2 = [Bucket, new1] (Adress 1)
//Head -> new2 (Address 1)*/
