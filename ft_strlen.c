/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:08:19 by prutkows          #+#    #+#             */
/*   Updated: 2024/02/27 11:08:21 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	while (s[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	int	length;

// 	char test_string[100];
// 	printf("Enter a string: ");
// 	scanf("%s", test_string);
// 	length = ft_strlen(test_string);
// 	printf("Length of the string: %d\n", length);
// 	return (0);
// }
