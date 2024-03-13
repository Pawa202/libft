/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:35:36 by prutkows          #+#    #+#             */
/*   Updated: 2024/02/27 10:35:40 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int a)
{
	return (a >= 0 && a <= 127);
}

// int	main(void)
// {
// 	int test_char = 128;

// 	if (ft_isascii(test_char))
// 	{
// 		printf("%c is a valid ASCII character.\n", test_char);
// 	}
// 	else
// 	{
// 		printf("%c is not a valid ASCII character.\n", test_char);
// 	}

// 	return (0);
// }