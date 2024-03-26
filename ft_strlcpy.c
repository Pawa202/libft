/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:30:02 by prutkows          #+#    #+#             */
/*   Updated: 2024/02/28 18:30:04 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
		return(ft_strlen(src));
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	src[] = "Hello, World!";
// 	char	dest[20];
// 	size_t	len;

// 	len = ft_strlcpy(dest, src, sizeof(dest));
// 	printf("Copied string: %s\n", dest);
// 	printf("Length of source string: %lu\n", len);
// 	return (0);
// }
