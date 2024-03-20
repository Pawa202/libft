/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:52:01 by prutkows          #+#    #+#             */
/*   Updated: 2024/03/08 11:52:02 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char *s1 = "Hello, ";
// 	char *s2 = "World!";
// 	char *joined;

// 	joined = ft_strjoin(s1, s2);

// 	if (joined == NULL)
// 	{
// 		printf("Failed to allocate memory.\n");
// 		return (1);
// 	}

// 	printf("Joined string: %s\n", joined);

// 	free(joined); // Pamiętaj, aby zwolnić pamięć!

// 	return (0);
// }