/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:51:13 by prutkows          #+#    #+#             */
/*   Updated: 2024/03/07 10:51:18 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	needle_len = ft_strlen(needle);
	while (*haystack && len >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
		{
			return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*big = "Hello, World!";
// 	const char	*little = "World";
// 	size_t		len;
// 	char		*result;

// 	len = 13;
// 	result = ft_strnstr(big, little, len);
// 	if (result)
// 	{
// 		printf("Found '%s' in '%s' at position: %ld\n", little, big, result
// 			- big);
// 	}
// 	else
// 	{
// 		printf("Did not find '%s' in '%s'\n", little, big);
// 	}
// 	return (0);
// }
