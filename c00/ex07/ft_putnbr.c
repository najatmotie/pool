/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:58:43 by nmotie-           #+#    #+#             */
/*   Updated: 2023/10/29 12:58:46 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	tmp;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		nb = -nb;
		write (1, "-", 1);
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb >= 0 && nb <= 9)
	{
		tmp = nb + 48;
		write (1, &tmp, 1);
	}
}
/*
int main()
{
	int nbr1 = 5;
	int nbr2 = -5;
	int nbr3 = -2147483648;
	int nbr4 = 2147483647;

	ft_putnbr(nbr1);
	write(1, "\n", 1);

	ft_putnbr(nbr2);
	write(1, "\n", 1);

	ft_putnbr(nbr3);
	write(1, "\n", 1);

	ft_putnbr(nbr4);
	write(1, "\n", 1);
}
*/
