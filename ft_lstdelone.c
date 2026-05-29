/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 15:46:13 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/29 16:48:04 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
//void (*del)(void *) is a function pointer
//"a function that knows how to free the content"
//I delete first the content
//second the node itself
//the del function is:
/*
void	del(void *content)
{
	free (content);
}

int	main(void)
{
	t_list	*node;
	char	*str;

	str = malloc(9);
	if (str == NULL)
		return (1);
	strcpy(str, "Die Node");
	node = ft_lstnew(str);
	printf("Content before deletion: %s\n", (char *)node->content);
	ft_lstdelone(node, del);
	printf("Node deleted successfully.\n");
	return (0);
}*/
