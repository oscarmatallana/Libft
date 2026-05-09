/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 15:34:48 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/04 14:31:56 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (i);
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Giorgos xanthak";

	printf("%d", ft_strlen(str)); 
	return (0);
}*/
