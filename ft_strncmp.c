/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:32:01 by prutkows          #+#    #+#             */
/*   Updated: 2024/03/01 12:32:05 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (n-- && *str1 && *str2)
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
		str1++;
		str2++;
	}
	return (0);
}
// int main() {
//     const char *text1 = "Hello, World!";
//     const char *text2 = "Hello, C Programming!";
//     size_t n = 7;

//     int result = ft_strncmp(text1, text2, n);
//     int result2 = strncmp(text1, text2, n);

//     if (result == 0) {
//         printf("Pierwsze %zu znaków są identyczne.\n", n);
//     } else if (result < 0) {
//         printf("Pierwsze %zu znaków różnią się, a pierwszy różniący się znak w tekście 1 jest mniejszy niż w tekście 2.\n", n);
//     } else {
//         printf("Pierwsze %zu znaków różnią się, a pierwszy różniący się znak w tekście 1 jest większy niż w tekście 2.\n", n);
//     }

//     if (result2 == 0) {
//         printf("Pierwsze %zu znaków są identyczne.\n", n);
//     } else if (result < 0) {
//         printf("Pierwsze %zu znaków różnią się, a pierwszy różniący się znak w tekście 1 jest mniejszy niż w tekście 2.\n", n);
//     } else {
//         printf("Pierwsze %zu znaków różnią się, a pierwszy różniący się znak w tekście 1 jest większy niż w tekście 2.\n", n);
//     }

//     return 0;
// }
