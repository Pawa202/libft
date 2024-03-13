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

void *ft_memchr(const void *str, int c, size_t n)
{
    unsigned char *s;
    unsigned char uc;

    s = (unsigned char *)str;
    uc = (unsigned char)c;
    while (n--)
    {
        if (*s == uc)
            return (s);
        s++;
    }
    return (0);
}

int main() {
    const char *text = "Hello, World!";
    char search_char = 'o';
    size_t n = strlen(text);

    void *result = ft_memchr(text, search_char, n);

    if (result) {
        printf("Znaleziono '%c' w tekście: %s\n", search_char, (char *)result);
    } else {
        printf("'%c' nie zostało znalezione w tekście.\n", search_char);
    }

    return 0;
}
