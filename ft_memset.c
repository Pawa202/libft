/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:30:34 by prutkows          #+#    #+#             */
/*   Updated: 2024/02/27 11:30:36 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// void	*ft_memset(void *buffer, int value, size_t len)
// {
// 	unsigned char	*p;
// 	unsigned char	uc_value;

// 	uc_value = (unsigned char)value;
// 	p = buffer;
// 	while (len--)
// 	{
// 		*p++ = uc_value;
// 	}
// 	return (buffer);
// }

void	*ft_memset(void *buffer, int value, size_t len)
{
	while (len--)
	{
		*(unsigned char *)buffer++ = (unsigned char)value;
	}
	return (buffer);
}
// int	main(void)
// {
// 	char	myString[20];
// 	char	standardString[20];

// 	// Ustawienie pierwszych 10 bajtów ciągu na 'A'
// 	ft_memset(myString, 'A', 10);
// 	// Wyświetlenie rezultatu
// 	printf("String after ft_memset: %s\len", myString);
// 	// Porównanie z wynikiem funkcji memset z biblioteki standardowej
// 	memset(standardString, 'A', 10);
// 	if (strcmp(myString, standardString) == 0)
// 	{
// 		printf("Results match!\len");
// 	}
// 	else
// 	{
// 		printf("Results do not match.\len");
// 	}
// 	return (0);
// }
