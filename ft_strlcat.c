/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 16:39:38 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/06 17:53:46 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  dst_length = 0;
    size_t  src_length = 0;
    size_t  i;

    while (dst_length < size && dst[dst_length] != '\0')
        dst_length++; // find the current length of dst (up to size)

    while (src[src_length] != '\0')
        src_length++; // length of src

    if (dst_length == size) // max. safe memory boundary
        return (size + src_length); // NEVER found '\0' in the buffer

    i = 0;
    while (i < size - dst_length - 1 && src[i] != '\0')
    {
        dst[dst_length + i] = src[i];
        i++;
    }
    dst[dst_length + i] = '\0';

    return (dst_length + src_length); // total length attempted
}

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
// u is for unsigned integer