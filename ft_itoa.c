/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:16:28 by prutkows          #+#    #+#             */
/*   Updated: 2024/03/11 12:16:32 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	get_num_length(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
		length = 1;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	int		length;
	char	*str;

	long long n_ll = n; // przekształcamy n na long long
	length = get_num_length(n);
	str = malloc(length + 1);
	if (!str)
		return (NULL);
	str[length] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n_ll < 0)
	{
		str[0] = '-';
		n_ll *= -1; // mnożymy n_ll, a nie n
	}
	while (n_ll > 0)
	{
		str[--length] = (n_ll % 10) + '0';
		n_ll /= 10;
	}
	return (str);
}
// int	main(void)
// {
// 	int		num1;
// 	int		num2;
// 	int		num3;
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;

// 	num1 = 12345;
// 	num2 = -6789;
// 	num3 = 0;
// 	str1 = ft_itoa(num1);
// 	str2 = ft_itoa(num2);
// 	str3 = ft_itoa(num3);
// 	if (!str1 || !str2 || !str3)
// 	{
// 		printf("Failed to allocate memory.\n");
// 		return (1);
// 	}
// 	printf("Integer: %d, String: %s\n", num1, str1);
// 	printf("Integer: %d, String: %s\n", num2, str2);
// 	printf("Integer: %d, String: %s\n", num3, str3);
// 	free(str1);
// 	free(str2);
// 	free(str3);
// 	return (0);
// }
