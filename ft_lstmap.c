/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 18:27:13 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/29 19:21:01 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (new_node == NULL)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
//ft_lstiter:
//Visit each node and do something
//ft_lstmap:
//Visit each node, transform its content,
//and build a complete new list
//After the function we have two lists:
//- The original one
//- The second generated after applying f to the original
//t_list *ft_lstmap returns the head of the newly created list,
//because the function allocates the nodes
//Long story, short, this function:
//Traverses original list
//Transforms each content
//Creates new nodes
//Builds and returns a new list
//Cleanes up everything if allocation fails
//If ft_lstadd_back() happens after the if, 
//how can new_list already contain nodes that need to be cleared?
//Because we're inside a loop
//The if is not happening during the first iteration necessarily
//ft_lstadd_back has happened during previous iterations
//There are actually two things to clean:
//1. The newly created content that failed to become a node
//2. The nodes already accumulated in new_list
/*
void	*capitalize_first(void *content)
{
	char	*str;
	char	*copy;

	str = (char *)content;
	copy = ft_strdup(str);
	if (!copy)
		return (NULL);
	if (copy[0] >= 'a' && copy[0] <= 'z')
		copy[0] = copy[0] - 32;
	return (copy);
}

void	del(void *content)
{
	free(content);
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("[%s] -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	t_list	*node5;
	t_list	*new_list;

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
	printf("Original list:\n");
	print_list(head);
	new_list = ft_lstmap(head, capitalize_first, del);
	printf("\nNew list after applying f:\n");
	print_list(new_list);
	ft_lstclear(&new_list, del);
	return (0);
}*/
