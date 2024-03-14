/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:29:45 by prutkows          #+#    #+#             */
/*   Updated: 2024/03/11 11:29:46 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_toklen(const char *s, char c)
{
	int	ret;

	ret = 0;
	while (*s)
	{
		if (*s != c)
		{
			++ret;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (ret);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	int		i;
	int		j;
	int		len;

	ret = (char **)malloc(sizeof(char *) * (ft_toklen(s, c) + 1));
	if (!ret)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (s[len] && s[len] != c)
				++len;
			ret[i] = (char *)malloc(len + 1);
			if (!ret[i])
				return (NULL);
			j = 0;
			while (j < len)
				ret[i][j++] = *s++;
			ret[i++][j] = '\0';
		}
		else
			++s;
	}
	ret[i] = NULL;
	return (ret);
}
// int	main(void)
// {
// 	const char *s = "Hello,World!This,is,a,test";
// 	char c = ',';
// 	char **result;

// 	result = ft_split(s, c);

// 	if (!result)
// 	{
// 		printf("Failed to allocate memory.\n");
// 		return (1);
// 	}

// 	printf("Original string: '%s'\n", s);

// 	int i = 0;
// 	while (result[i])
// 	{
// 		printf("Token %d: '%s'\n", i + 1, result[i]);
// 		free(result[i]);
// 		i++;
// 	}

// 	free(result);

// 	return (0);
// }