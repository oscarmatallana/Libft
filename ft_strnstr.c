/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:13:10 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/19 17:09:26 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len && big[i + j] != '\0'
			&& little[j] != '\0')
		{
			j++;
			if (little[j] == '\0')
				return ((char *) &big[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	big[] = "Calzone";
	char	little[] = "zo";

	printf("func: %s\n", ft_strnstr(big, little, 5));
}*/
/*Notes:
<stddef.h> for size_t
Line_22: If little is empty, return the entire big
Line_24: Iterate through big up to len
Line_27_28: Compare chars of big and little, don't exceed len
Line_31_32: If a match has been found, return big starting from little
Line_36: No match is NULL*/
