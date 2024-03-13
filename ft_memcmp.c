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

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    unsigned char *s1;
    unsigned char *s2;

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
