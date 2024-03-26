/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:01:36 by prutkows          #+#    #+#             */
/*   Updated: 2024/03/01 12:01:37 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	len = ft_strlen(str);
	while (*str)
	{
		if ((unsigned char)str[len] == (unsigned char)c)
			return ((char *)&str[len]);
		len--;
	}
	return (0);
}
int main() {
    const char *text = "Hello, World!";
    char search_char = 'o';

    char *result = ft_strrchr(text, search_char);

    if (result) {
        printf("Znaleziono '%c' w tekście: %s\n", search_char, result);
    } else {
        printf("'%c' nie zostało znalezione w tekście.\n", search_char);
    }

    return (0);
}
