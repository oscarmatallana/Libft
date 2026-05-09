/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 14:45:14 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/04 16:57:09 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>
//#include <stdio.h>
//#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	return (s);
}
/*
int	main(void)
{
	char str1[] = "hello world";
	char str2[] = "hello world";
	
	printf("before: %s\n", str1);
	ft_memset(str1, 'A', 4);
	printf("after: %s\n", str1);
	memset(str2, 'A', 4);
	printf("memset: %s\n", str2);
}*/
