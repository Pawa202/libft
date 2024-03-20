/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:53:33 by prutkows          #+#    #+#             */
/*   Updated: 2024/03/08 10:53:34 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	len = (s_len - start < len) ? s_len - start : len;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	char *s = "Hello, World!ghhh";
	unsigned int start = 7;
	int len = 8;
	char *substr;

	substr = ft_substr(s, start, len);

	if (substr == NULL)
	{
		printf("Failed to allocate memory.\n");
		return (1);
	}

	printf("Substring: %s\n", substr);

	free(substr); // Pamiętaj, aby zwolnić pamięć!

	return (0);
}*/
