/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:51:13 by prutkows          #+#    #+#             */
/*   Updated: 2024/03/07 10:51:18 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
  size_t little_len;

  if (*little == '\0')
  {
    return ((char *)big);
  }

  little_len = strlen(little);
  while (*big && len >= little_len)
  {
    if (strncmp(big, little, little_len) == 0)
    {
      return ((char *)big);
    }
    big++;
    len--;
  }
  return (NULL);
}

// int main(void)
// {
//     const char *big = "Hello, World!";
//     const char *little = "World";
//     size_t len = 13;
//     char *result;

//     result = ft_strnstr(big, little, len);

//     if (result) {
//         printf("Found '%s' in '%s' at position: %ld\n", little, big, result- big);
//     } else {
//         printf("Did not find '%s' in '%s'\n", little, big);
//     }

//     return (0);
// }
