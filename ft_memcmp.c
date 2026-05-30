/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 11:51:29 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/30 12:09:54 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*pstr1;
	const unsigned char	*pstr2;

	pstr1 = s1;
	pstr2 = s2;
	while (n--)
	{
		if (*pstr1 != *pstr2)
			return (*pstr1 - *pstr2);
		pstr1++;
		pstr2++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[] = "Zukunftsmusik";
	char	str2[] = "Zukunftmusik";

	printf("memcmp:     %d\n", memcmp(str1, str2, 13));
	printf("ft_memcmp:  %d\n", ft_memcmp(str1, str2, 13));
}*/
