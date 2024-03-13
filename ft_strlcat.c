/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:12:10 by prutkows          #+#    #+#             */
/*   Updated: 2024/02/29 14:12:12 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"


unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	r;

	i = 0;
	j = 0;
	r = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (size <= i)
		r += size;
	else
		r += i;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (r);
}

// int	main(void)
// {
// 	char			destination[20] = "Hello, ";
// 	char			source[] = "world!";
// 	unsigned int	result;

// 	printf("Before ft_strlcat: %s\n", destination);
// 	result = ft_strlcat(destination, source, sizeof(destination));
// 	printf("After ft_strlcat: %s\n", destination);
// 	printf("Return value: %u\n", result);
// 	return (0);
// }
