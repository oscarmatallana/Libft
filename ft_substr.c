/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:12:03 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/20 19:15:57 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h> for printf
//#include <string.h> for memcpy
//#include <stdlib.h> for free

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		substr = (char *)malloc(sizeof(char) * 1);
		if (substr == NULL)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}
/*
int	main(void)
{
	char	*result;

	// Test 1: normal case
	result = ft_substr("hello world", 6, 5);
	printf("Test 1: %s\n", result);
	free(result);
	// Test 2: substring from beginning
	result = ft_substr("hello world", 0, 5);
	printf("Test 2: %s\n", result);
	free(result);
	// Test 3: len larger than remaining chars
	result = ft_substr("hello world", 6, 50);
	printf("Test 3: %s\n", result);
	free(result);
	// Test 4: start beyond string length
	result = ft_substr("hello", 12, 5);
	printf("Test 4: '%s'\n", result);
	free(result);
	// Test 5: empty string
	result = ft_substr("", 0, 5);
	printf("Test 5: '%s'\n", result);
	free(result);
	return (0);
}*/
//s + start means move the pointer "start" characters forward
