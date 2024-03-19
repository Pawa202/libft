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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t    src_len;
    size_t    dst_len;

    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);

    if (dst_len >= dstsize)
    {
        dst_len = dstsize;
    }

    if (dst_len == dstsize)
    {
        return (dstsize + src_len);
    }

    if (src_len < dstsize - dst_len)
    {
        ft_memcpy(dst + dst_len, src, src_len + 1);
    }
    else
    {
        ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
        dst[dstsize - 1] = '\0';
    }
    return (dst_len + src_len);
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
