/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 16:50:27 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/11 17:14:00 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

int	main(void)
{
    printf("ASCII %d\n", ft_toupper('d'));
    printf("%c\n", ft_toupper('d'));
}
//Converts a lowercase letter to uppercase
//Returns the lowercase version or the input uppercase letter