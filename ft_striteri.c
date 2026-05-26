/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 16:27:28 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/26 16:51:34 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
//original string -  modify characters directly -  string changed
//&s[i] instead of s[i]
//Receive address of char
//Directly mutate original memory
//Changing *c changes original memory
//ft_strmapi - memory allocation
//ft_striteri - no memory allocation
//original s is gone
//map: Transform data into new data
//iter: Visit each element and do something directly
/*
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	to_upper_even(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

void	add_index(unsigned int i, char *c)
{
	*c = *c + i;
}

static void	test_striteri(char *str,
		void (*f)(unsigned int, char *),
		char *test_name)
{
	printf("Test: %s\n", test_name);
	printf("Before: \"%s\"\n", str);
	ft_striteri(str, f);
	printf("After : \"%s\"\n\n", str);
}

int	main(void)
{
	char	str1[] = "healthy hope";
	char	str2[] = "abcdef";
	char	str3[] = "";

	test_striteri(str1, to_upper_even,
		"Uppercase even indexes");
	test_striteri(str2, add_index,
		"Add index to characters");
	test_striteri(str3, to_upper_even,
		"Empty string");
	return (0);
}*/
