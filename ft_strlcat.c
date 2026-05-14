/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 16:39:38 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/12 12:37:24 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include <stdio.h>
//include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_length;
	size_t	src_length;
	size_t	i;

	dst_length = 0;
	src_length = 0;
	while (dst_length < size && dst[dst_length] != '\0')
		dst_length++;
	while (src[src_length] != '\0')
		src_length++;
	if (dst_length == size)
		return (size + src_length);
	i = 0;
	while (i < size - dst_length - 1 && src[i] != '\0')
	{
		dst[dst_length + i] = src[i];
		i++;
	}
	dst[dst_length + i] = '\0';
	return (dst_length + src_length);
}
/*
int	main(void)
{
	char	src[] = "Cola";
	char	src2[] = "Cola";
	char	dest[9] = "Hola";
	char	dest2[9] = "Hola";

	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("ft_strlcat-length: %zu\n", ft_strlcat(dest, src, 9));
	printf("final dest: %s\n", dest);
	printf("strlcat-length: %zu\n", strlcat(dest2, src2, 9));
	printf("strlcat-final dest: %s\n", dest2);
}
// z is for size type (size_t)
// u is for unsigned integer*/
