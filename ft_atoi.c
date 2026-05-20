/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 17:33:10 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/19 18:45:21 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> //for printf
//#include <stdlib.h> //for the real atoi

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1 * sign;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = (result * 10) + (*nptr - '0');
		nptr++;
	}
	return (sign * result);
}
/*
int	main(void)
{
	char	number[] = "-50";

	printf("target_output: %d\n", atoi(number));
	printf("my_output: %d\n", ft_atoi(number));
}*/
//(*nptr == 32) checks if the current character is a space character (or ' ')
//It keeps skipping characters in the range
//nptr points to the first “non-whitespace” after the loop finishes
//It includes the - or + sign 
//It skips the sign so that *nptr now points to the first digit
//It converts the char to integer (minus '0' or 48 in ASCII)
//It moves the numbers by one decimal place
//It moves to the next char (nptr++)
//It returns the result with the - or + sign
