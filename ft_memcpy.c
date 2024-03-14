/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:41:54 by prutkows          #+#    #+#             */
/*   Updated: 2024/02/28 16:41:56 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
int	main(void)
{
	char	source[] = "Hello, World!";
	char	destination[]= "Goodbye, World!jfhggfgfg";

	ft_memcpy(destination, source, sizeof(source));
	// Print the content of the destination array to verify the copy
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);

	return (0);
}
