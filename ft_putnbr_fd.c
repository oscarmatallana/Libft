/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 14:10:57 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/27 14:38:43 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd((nb % 10) + '0', fd);
}
/*
//Break the number into digits
//Then print the digits one by one
//Numbers are processed from right to left
//but I read the numbers left to right
//I used long to handel -2147483648
//Recursion: ft_putnbr_fd(5837), ft_putnbr_fd(583)
//ft_putnbr_fd(58), ft_putnbr_fd(5) - until reaching the first digit
//5 is the first to print then it goes back
//5 % 10 = 5
//58 % 10 = 8 and so on...
//The function returns to the point after the recursive call
//That means this line already happened: ft_putnbr_fd(nb / 10, fd)
//Like saying: "Pause here and go print earlier digits first"

int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	return (0);
}*/
