/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 17:06:02 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/27 19:10:19 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
int	main(void)
{
	char	str[] = "Spider Web";
	t_list	*new_node;

	new_node = ft_lstnew(str);
	printf("Content in new_node: %s\n", (char *)new_node->content);
	free(new_node);
	return (0);
}*/
//The linked list is an organizational structure connecting memory locations
//C allows these two actions to be merged into one syntax block
//The struct definition and the typedef alias
//are two different mechanisms
//In "libft.h":
/*typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;
*/
//This is a shortcut for:
/*struct s_list
{
	void *content;
	struct s_list *next;
};

typedef struct s_list t_list;
*/
//Otherwise I would always have to write "struct s_list"
//before the name of that new structure variable
//now "struct s_list *node" is "t_list *node"
//1. malloc creates the node
//2. content stores address of external data (from the main)
//3. next stores address of future node or NULL
/*new_node
   ↓
+----------------------+
| content |   next     |
+----------------------+
| address  |  NULL     |
+----------------------+
     ↓
"Spider Web"*/
