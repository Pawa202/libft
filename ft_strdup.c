/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:26:40 by prutkows          #+#    #+#             */
/*   Updated: 2024/03/08 10:26:42 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// char	*ft_strdup(const char *s1)
// {
// 	char	*dest;
// 	size_t	i;

// 	i = 0;
// 	dest = (char *)malloc(ft_strlen(s1) + 1);
// 	if (!dest)
// 		return (NULL);
// 	while (s1[i])
// 	{
// 		dest[i] = s1[i];
// 		i++;
// 	}
// 	dest[i] = 0;
// 	return (dest);
// }
char	*ft_strdup(const char *s1)
{
	char	*dest;
	char	*start;

	dest = (char *)malloc(ft_strlen(s1) + 1);
	if (!dest)
		return (NULL);
	start = dest;
	while (*s1)
	{
		*dest++ = *s1++;
	}
	*dest = '\0';
	return (start);
}

int	main(void)
{
	char	*original;
	char	*copy;

	original = "Hello, World!";
	copy = ft_strdup(original);
	printf("Copy: %s\n", copy);
	// Używaj skopiowanego ciągu znaków
	free(copy);
	// Zwolnij pamięć po skończeniu używania skopiowanego ciągu znaków
	return (0);
}
