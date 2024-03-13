/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:14:36 by prutkows          #+#    #+#             */
/*   Updated: 2024/03/08 12:14:37 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*new_str(const char *s1, size_t start, size_t len)
{
	char	*str;
	size_t	i;

	if (len <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	return (str);
}

static int	to_trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	start;
	int	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && to_trim(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && to_trim(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*set;
// 	char	*trimmed;

// 	s1 = "   Hello, World!   ";
// 	set = " ";
// 	trimmed = ft_strtrim(s1, set);
// 	if (trimmed == NULL)
// 	{
// 		printf("Failed to allocate memory.\n");
// 		return (1);
// 	}
// 	printf("Original string: '%s'\n", s1);
// 	printf("Trimmed string:  '%s'\n", trimmed);
// 	free(trimmed); // Remember to free the allocated memory!
// 	return (0);
// }
