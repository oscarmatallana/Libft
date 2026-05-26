/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 11:20:56 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/26 14:55:17 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static int	count_chars_needed(long number)
{
	int	count;

	count = 0;
	if (number <= 0)
	{
		number = number * -1;
		count++;
	}
	while (number > 0)
	{
		number = number / 10;
		count++;
	}
	return (count);
}

static char	*fill_string(char *result, long number, int last_index)
{
	if (number == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (number < 0)
	{
		result[0] = '-';
		number = number * -1;
	}
	while (number > 0)
	{
		result[last_index] = (number % 10) + '0';
		number = number / 10;
		last_index--;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*str_result;
	int		str_length;
	long	number;

	number = n;
	str_length = count_chars_needed(number);
	str_result = (char *)malloc(sizeof(char) * (str_length + 1));
	if (!str_result)
		return (NULL);
	str_result[str_length] = '\0';
	return (fill_string(str_result, number, str_length - 1));
}
/*All this to count, allocate and fill:
"count_chars_needed" calculates the number of characters
Each division by 10 removes one digit
The number of removals equals the number of digits
It handels negative numbers and zero (and counts for minus and zero)
It makes the number positive to count the rest in the while loop
Long story, short: 
- If number is negative or zero: count one special character
- Then: remove digits one by one and count how many were removed
"char *fill_string" converts a number into a string representation:
If the number is zero: write '0', stop
If the number is negative: write '-', make the number positive
While digits still remain:
- take the last digit
- convert it into a character
- store it from right to left
- remove the processed digit
- move left in the string
- return the completed string
"ft_itoa": if ft_itoa is the manager,fill_string is the  worker
- Prepare the number
- Calculate required memory
- Allocate memory
- Add null terminator
- Ask fill_stringn to fill the digits
- Return completed string
"Why number = n?" 
- number may become positive
- digits will be consumed
- original n should remain untouched
*/
/*
int	main(void)
{
	int	n1 = -2147483648;
	char	*result = ft_itoa(n1);

	printf("The string for %d is: %s\n", n1, result);
	free(result);
	return (0);
}*/
