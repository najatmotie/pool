/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:27:26 by nmotie-           #+#    #+#             */
/*   Updated: 2023/11/02 14:29:21 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	n;
	long	i;

	n = nb;
	if (n <= 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	i = 2;
	if (n >= 2)
	{
		while (i * i <= n)
		{
			if (i * i == n)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}