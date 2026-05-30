/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 13:28:57 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/13 12:36:49 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
/*
int	main(void)
{
	const char	s[] = "Sei was du bist";
	int		c = 'w';
	const char	s2[] = "Sei was du bist";
	int		c2 = 'w';

	printf("It goes from: %s\n", ft_strchr(s, c));
	printf("It goes from: %s\n", strchr(s2, c2));
	printf("It goes from: %s\n", ft_strchr(s, '\0'));
	printf("It goes from: %s\n", strchr(s2, '\0'));
}
//line 27: // '\0' == '\0'? - // Check if c is '\0'*/
