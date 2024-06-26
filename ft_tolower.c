/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toLower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:33:50 by prutkows          #+#    #+#             */
/*   Updated: 2024/02/29 14:33:51 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	else
	{
		return (c);
	}
}
// int	main(void)
// {
// 	char	uppercase;
// 	char	lowercase;

// 	uppercase = 'A';
// 	lowercase = ft_tolower(uppercase);
// 	printf("Original character: %c\n", uppercase);
// 	printf("Uppercase character: %c\n", lowercase);
// 	return (0);
// }
