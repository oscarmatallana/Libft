/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 15:54:14 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/20 17:00:24 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t		i;
	size_t		length;
	char		*target;

	length = 0;
	while (s[length] != '\0')
		length++;
	target = (char *) malloc(sizeof(char) * (length + 1));
	if (target == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		target[i] = s[i];
		i++;
	}
	target[i] = '\0';
	return (target);
}
/*
int	main(void)
{
	char	str[] = "Fading memories";
	char	*test = ft_strdup(str);
	char	*realcopy = strdup(str);

	printf("ft_strdup output: %s\n", test);
	free(test);
	printf("strdup real output: %s\n", realcopy);
	free(realcopy);
}*/
//I could write target = malloc(sizeof(*target) * (length + 1)) as well
//Because as target is a pointer to char, *target is a char
//sizeof(char) == 1
//sizeof(*target) means "size of whatever target points to" (right now: a char)
//I could write i <= length and avoid adding '\0' afer the loop
