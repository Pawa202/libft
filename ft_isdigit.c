/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:39:06 by prutkows          #+#    #+#             */
/*   Updated: 2024/02/26 17:39:09 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_digit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}
// int	main(void)
// {
// 	char char1 = '5';
// 	char char2 = 'A';

// 	int result1 = ft_digit(char1);
// 	int result2 = ft_digit(char2);

// 	printf("Is '%c' a digit? %s\n", char1, result1 ? "Yes" : "No");
// 	printf("Is '%c' a digit? %s\n", char2, result2 ? "Yes" : "No");

// 	return (0);
// }