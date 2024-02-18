/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:29:33 by nmotie-           #+#    #+#             */
/*   Updated: 2023/10/29 16:10:17 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar('-');
		ft_putnbr(nb);
	}
	else if (nb > 9) 
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
	}
}
/*
int main()
{
	int num1 = 2;
	int num2 = -2;
	int num3 = -2147483648;
	int num4 = 2147483647;

	ft_putnbr(num1);
	write(1, "\n", 1);

	ft_putnbr(num2);
	write(1, "\n", 1);

	ft_putnbr(num3);
	write(1, "\n", 1);

	ft_putnbr(num4);
	write(1, "\n", 1);
}
*/
