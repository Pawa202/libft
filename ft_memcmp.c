/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:24:59 by prutkows          #+#    #+#             */
/*   Updated: 2024/03/01 16:25:01 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (n--)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
// int	main(void)
// {
// 	char str1[] = "Hello, World!";
// 	char str2[] = "Hello, World!";
// 	char str3[] = "Hello, GitHub!";
// 	int result;

// 	result = ft_memcmp(str1, str2, sizeof(str1));
// 	result == 0 ? printf("str1 i str2 są równe\n") :
//  printf("str1 i str2 są różne\n");

// 	result = ft_memcmp(str1, str3, sizeof(str1));
// 	result == 0 ? printf("str1 i str3 są równe\n") :
//  printf("str1 i str3 są różne\n");

// 	return (0);
// }