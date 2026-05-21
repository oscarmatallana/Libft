/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 12:28:08 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/21 13:52:25 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

static int	in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && in_set(s1[start], set))
		start++;
	while (end > start && in_set(s1[end - 1], set))
		end--;
	return (ft_substr(s1, start, end - start));
}
/*
int	main(void)
{
	char	*s1 = "cbaHier bin ichbac";
	char	*set = "abc";
	char	*trimmed = ft_strtrim(s1, set);

	printf("imput string: *%s*\n", s1);
	printf("trimmed string: *%s*\n", trimmed);
	free(trimmed);
	return (0);
}*/
/*
in_set():
- Loops through 'set' to check if character 'c' exists in it.
- Returns 1 if found, 0 otherwise.
- It is static (only usable inside this .c file).
ft_strtrim():
1_Check for NULL pointers to avoid invalid memory access.
2_Move 'start' forward while s1[start] is found in 'set'
to remove front trim characters.
3_ Move 'end' backward while s1[end - 1] is found in 'set' 
to remove back trim characters.
4_'end - start' gives the length of the trimmed section.
5_ft_substr(s1, start, end - start) allocates and returns a new trimmed string.
6_ft_substr(str, start, len) copies 'len' chars starting from index 'start'.
7_In the code of ft_substr I already included the '\0', don't forget!
*/
