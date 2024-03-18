/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:17:06 by prutkows          #+#    #+#             */
/*   Updated: 2024/03/07 12:17:08 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str) // convert a string to an integer
{
	int	i;
	int	n;
	int	minus;

	i = 0;
	n = 0;
	minus = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * minus);
}
// int	main(void)
// {
// 	const char *str = " -12345";
// 	int number;
//
// 	number = ft_atoi(str);
//
// 	printf("Converted number is %d\n", number);
//
// 	return (0);
// }