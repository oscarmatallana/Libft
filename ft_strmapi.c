/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 15:06:54 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/26 15:49:16 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	result = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
//Notes:ft_strmapi("hello", ?)
//- The caller decides how to change the charachters
//- Input character,
//apply custom rule or function f
//and output transformed character
//- This function creates a new string, the original s is unchanged (char const)
//- "result[i] = f(i, s[i])" 
//asks the user-provided function 
//how the indexed character should change
/*
char	to_upper_even(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	add_index(unsigned int i, char c)
{
	return (c + i);
}

static void	test_strmapi(char *input,
		char (*f)(unsigned int, char),
		char *test_name)
{
	char	*result;

	result = ft_strmapi(input, f);
	printf("Test: %s\n", test_name);
	if (!result)
	{
		printf("Result: NULL\n\n");
		return ;
	}
	printf("Input : \"%s\"\n", input);
	printf("Output: \"%s\"\n\n", result);
	free(result);
}

int	main(void)
{
	test_strmapi("healthy hope", to_upper_even,
		"Uppercase even indexes");
	test_strmapi("abcdef", add_index,
		"Add index to characters");
	test_strmapi("", to_upper_even,
		"Empty string");
	test_strmapi(NULL, to_upper_even,
		"NULL string");
	return (0);
}*/
