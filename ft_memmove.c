/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 16:42:50 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/06 16:18:00 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;

	if (dest == NULL && src == NULL)
		return (NULL);
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	if (pdest <= psrc)
	{
		while (n--)
			*pdest++ = *psrc++;
	}
	else if (pdest >= psrc)
	{
		pdest = pdest + (n - 1);
		psrc = psrc + (n - 1);
		while (n--)
		{
			*pdest-- = *psrc--;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	src1[] = "Job";
	char	dest1[] = "Salary";
	char	src2[] = "Job";
	char	dest2[] = "Salary";

	printf("before: %s\n", src1);
	ft_memmove(dest1, src1, sizeof(src1));
	printf("after: %s\n", dest1);
	printf("dest1_pos5: %c\n", dest1[5]);
	memmove(dest2, src2, sizeof(src2));
	printf("memmoverealoutput: %s\n", dest2);
	printf("dest2_pos5: %c\n", dest2[5]);


//Check: https://www.geeksforgeeks.org/c/void-pointer-c-cpp/
//https://marmota.medium.com/c-language-making-memmove-def8792bb8d5
//pdest = pdest + (n - 1): last position 'n', pdest starts at 1
}*/
