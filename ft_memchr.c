/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:10:13 by prutkows          #+#    #+#             */
/*   Updated: 2024/03/01 15:10:15 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	while (n--)
	{
		if (*s == (unsigned char)c)
			return (s);
		s++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*text = "Hello, World!";
// 	char		search_char;
// 	size_t		n;
// 	void		*result;

// 	search_char = 'l';
// 	n = ft_strlen(text);
// 	result = ft_memchr(text, search_char, n);
// 	if (result)
// 	{
// 		printf("Znaleziono '%c'\n", search_char);
// 	}
// 	else
// 	{
// 		printf("'%c' nie zostało znalezione w tekście.\n", search_char);
// 	}
// 	return (0);
// }
