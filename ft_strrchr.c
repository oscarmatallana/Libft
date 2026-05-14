/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 16:55:21 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/12 18:21:09 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	length;

	length = ft_strlen(s);
	i = length;
	while (&s[i] >= &s[0])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*
int	main(void)
{
	const char	s[] = "Sei was du bist";
	const char	s2[] = "Sei was du bist";

	printf("It goes from: %s\n", ft_strrchr(s, 'e'));
	printf("It goes from: %s\n", strrchr(s2, 'e'));
	printf("It goes from: %s\n", ft_strrchr(s, 'x'));
	printf("It goes from: %s\n", strrchr(s2, 'x'));
	printf("It goes from: %s\n", ft_strrchr(s, 'S'));
	printf("It goes from: %s\n", strrchr(s2, 'S'));
	printf("It goes from: %s\n", ft_strrchr(s, 't'));
	printf("It goes from: %s\n", strrchr(s2, 't'));
}*/
