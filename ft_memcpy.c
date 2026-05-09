/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 12:09:09 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/05 16:39:13 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;

	if (dest == NULL && src == NULL)
		return (NULL);
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	while (n--)
		*pdest++ = *psrc++;
	return (dest);
}
/*
int	main(void)
{
	char	src1[] = "ILS-Yes";
	char	dest1[8] = "";
	char	src2[] = "ILS-Yes";
	char	dest2[8] = "";

	printf("before: %s\n", src1);
	ft_memcpy(dest1, src1, sizeof(src1));
	printf("after: %s\n", dest1);
	memcpy(dest2, src2, sizeof(src2));
	printf("memcpyrealoutput: %s\n", dest2);

Check: https://www.geeksforgeeks.org/c/void-pointer-c-cpp/
}*/
