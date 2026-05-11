/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 17:20:28 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/11 17:32:46 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

int	main(void)
{
    printf("ASCII %d\n", ft_tolower('D'));
    printf("%c\n", ft_tolower('D'));
}
// Converts an uppercase letter to lowercase
// Returns the lowercase version if applicable,
// otherwise returns the original character unchanged