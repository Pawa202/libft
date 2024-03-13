/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:27:54 by prutkows          #+#    #+#             */
/*   Updated: 2024/03/01 10:27:56 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"


char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (!*str)
			return (0);
		str++;
	}
	return ((char *)str);
}
// int	main(void)
// {
// 	const char	*myString = "Hello, World!";
// 	char		searchChar;
// 	char		*result;
//
// 	searchChar = 'o';
// 	result = ft_strchr(myString, searchChar);
// 	if (result)
// 	{
// 		printf("Character '%c' found at position: %ld\n", searchChar, result
// 			- myString);
// 	}
// 	else
// 	{
// 		printf("Character '%c' not found in the string.\n", searchChar);
// 	}
// 	return (0);
// }
