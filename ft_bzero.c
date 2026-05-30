/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 17:08:29 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/30 13:10:24 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>
//#include <stdio.h> // for printf
//#include <string.h> // for bzero
//#include <unistd.h> // for write

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char str1[] = "hello world";
	char str2[] = "hello world";
	
	printf("before: %s\n", str1);
	ft_bzero(str1, 4);
	write(1, &str1, 11);
	write(1, "\n", 1);
	bzero(str2, 4);
	write(1, &str2, 11);
	write(1, "\n", 1);
}*/
