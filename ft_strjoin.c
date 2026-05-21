/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 10:26:40 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/21 11:24:20 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h> //for strlen and memcpy
//#include <stdlib.h> //for malloc and free

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*concat_new_str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	concat_new_str = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (concat_new_str == NULL)
		return (NULL);
	ft_memcpy(concat_new_str, s1, len_s1);
	ft_memcpy(concat_new_str + len_s1, s2, len_s2);
	concat_new_str[len_s1 + len_s2] = '\0';
	return (concat_new_str);
}
/*
int	main(void)
{
	char	*s1 = "Sei was du bist, ";
	char	*s2 = "gib was du hast";
	char	*concatenated = ft_strjoin(s1, s2);

	printf("%s\n", concatenated);
	free(concatenated);
	return (0);
}*/
