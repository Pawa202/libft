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

static void	ft_initiation(size_t *index, int *word_index, int *start_word)
{
	*index = 0;
	*word_index = 0;
	*start_word = -1;
}

static void	*ft_free_word(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static char	*ft_fill_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = 0;
	return (word);
}

static int	ft_word_count(const char *str, char c)
{
	int	count;
	int	y;

	count = 0;
	y = 0;
	while (*str)
	{
		if (*str != c && y == 0)
		{
			y = 1;
			count++;
		}
		else if (*str == c)
			y = 0;
		str++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	index;
	int		word_index;
	int		start_word;

	ft_initiation(&index, &word_index, &start_word);
	result = ft_calloc((ft_word_count(s, c) + 1), sizeof(char *));
	if (*result)
		return (NULL);
	while (index <= ft_strlen(s))
	{
		if (s[index] != c && start_word < 0)
			start_word = index;
		else if ((s[index] == c || index == ft_strlen(s)) && start_word >= 0)
		{
			result[word_index] = ft_fill_word(s, start_word, index);
			if (!(result[word_index]))
				return (ft_free_word(result, word_index));
			start_word = -1;
			word_index++;
		}
		index++;
	}
	return (result);
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