/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 18:15:54 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/13 19:41:45 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h> because of size_t
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ps;

	ps = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ps[i] == (unsigned char)c)
			return ((void *)&ps[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char		s[] = "Sei was du bist";
	int		c = 'w';
	char		s2[] = "Sei was du bist";
	int		c2 = 'w';

	printf("It goes from: %s\n", (char *)ft_memchr(s, c, 10));
	printf("It goes from: %s\n", (char *)memchr(s2, c2, 10));
	printf("It goes from: %s\n", (char *)ft_memchr(s, '\0', 6));
	printf("It goes from: %s\n", (char *)memchr(s2, '\0', 6));
	printf("It goes from: %s\n", (char *)ft_memchr(s, 32, 6));
	printf("It goes from: %s\n", (char *)memchr(s2, 32, 6));
}*/
