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


char *ft_strnstr(const char *big, const char *little, size_t len)
{
    if (*little == '\0') {
        return (char *)big;
    }

    while (*big && len > 0) {
        const char *b = big;
        const char *l = little;

        while (*b && *l && *b == *l && len > 0) {
            b++;
            l++;
            len--;
        }

        if (*l == '\0') {
            return (char *)big;
        }

        big++;
        len--;
    }

    return NULL;
}


int main(void)
{
    const char *big = "Hello, World!";
    const char *little = "World";
    size_t len = 13;
    char *result;

    result = ft_strnstr(big, little, len);

    if (result) {
        printf("Found '%s' in '%s' at position: %ld\n", little, big, result - big);
    } else {
        printf("Did not find '%s' in '%s'\n", little, big);
    }

    return 0;
}
