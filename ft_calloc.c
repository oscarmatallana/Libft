/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:43:59 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/20 13:20:59 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	memory;
	void	*ptr;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	memory = nmemb * size;
	ptr = malloc(memory);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, memory);
	return (ptr);
}
/*
int	main(void)
{
	int	*array;
	int	i;

	array = ft_calloc(10, sizeof(int));
	if (array == NULL)
		return (1);
	i = 0;
	while (i < 10)
	{
		printf("%d ", array[i]);
		i++;
	}
	free(array);
	return (0);
}*/
//Behavior:It prevents integer overflow with SIZE_MAX / size
//<stdint.h> is for SIZE_MAX
//Allocates nmemb * size bytes of memory with malloc (memory block)
//Checks if allocation succeeded (ptr == NULL?)
//Initializes all bytes to zero
//Returns a pointer to the allocated memory
//Returns NULL if allocation fails or if the multiplication overflows
//Check www.geeksforgeeks.org/c/
