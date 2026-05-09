/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 13:07:35 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/06 13:47:50 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	src_length;
	unsigned int	i;

	src_length = 0;
	while (src[src_length] != '\0')
		src_length++;
	if (size > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_length);
}
/*
int	main(void)
{
	char	src[] = "This was difficult";
//	char	src2[] = "This was difficult";
	char	dest[11];
//	char	dest2[50];

	ft_strlcpy(dest, src, 11);
	printf("src: %s\n", src);
	printf("final dest: %s", dest);
//	strlcpy(dest2, src2, 50);
//	printf("strlcpyrealoutput: %s\n", dest2);
}*/
