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

// static size_t	ft_toklen(const char *s, char c)
// {
// 	size_t	ret;

// 	ret = 0;
// 	while (*s)
// 	{
// 		if (*s != c)
// 		{
// 			++ret;
// 			while (*s && *s != c)
// 				++s;
// 		}
// 		else
// 			++s;
// 	}
// 	return (ret);
// }
static size_t	ft_toklen(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;

	lst = (char **)malloc((ft_toklen(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (ft_strchr(s, c))
				word_len = ft_strchr(s, c) - s;
			else
				word_len = ft_strlen(s);
			lst[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}

// char	**ft_split(const char *s, char c)
// {
// 	char	**ret;
// 	int		i;
// 	int		j;
// 	int		len;

// 	ret = (char **)malloc(sizeof(char *) * (ft_toklen(s, c) + 1));
// 	if (!ret)
// 		return (NULL);
// 	i = 0;
// 	while (*s)
// 	{
// 		if (*s != c)
// 		{
// 			len = 0;
// 			while (s[len] && s[len] != c)
// 				++len;
// 			ret[i] = (char *)malloc(len + 1);
// 			if (!ret[i])
// 				return (NULL);
// 			j = 0;
// 			while (j < len)
// 				ret[i][j++] = *s++;
// 			ret[i++][j] = '\0';
// 		}
// 		else
// 			++s;
// 	}
// 	ret[i] = NULL;
// 	return (ret);
// }
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