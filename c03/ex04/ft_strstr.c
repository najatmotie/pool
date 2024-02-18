/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmotie- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:53:32 by nmotie-           #+#    #+#             */
/*   Updated: 2023/10/28 17:53:36 by nmotie-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (to_find[i] != '\0')
		i++;
	if (i == 0)
		return (str);
	j = 0;
	while (str[j] != '\0')
	{
		k = 0;
		while (str[j + k] == to_find[k])
		{
			k++;
			if (k == i)
			{
				return (&str[j]);
			}
		}
		j++;
	}
	return (0);
}
/*
int main()
{
	char sar[] = "hola, como estas?";
	char find[] = "co";
	printf("%s", ft_strstr(sar, find));
}
*/
