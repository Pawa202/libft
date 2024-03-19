/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <prutkows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:46:59 by prutkows          #+#    #+#             */
/*   Updated: 2024/03/19 21:28:26 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*a;

	a = s;
	while (n--)
	{
		*a++ = 0;
	}
}

// int	main(void)
// {
// 	char	buffer[10];
// 	size_t	bufferSize;

// 	// Example usage
// 	bufferSize = sizeof(buffer);
// 	// Fill buffer with zeros using ft_bzero
// 	ft_bzero(buffer, bufferSize);
// 	// Print the contents of the buffer
// 	for (size_t i = 0; i < bufferSize; ++i)
// 	{
// 		printf("%d ", buffer[i]);
// 	}
// 	return (0);
// }
