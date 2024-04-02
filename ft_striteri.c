/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:24:33 by prutkows          #+#    #+#             */
/*   Updated: 2024/03/11 14:24:34 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
// void	print_index_and_char(unsigned int i, char *c)
// {
//     printf("Index: %u, Char: %c\n", i, *c);
// }

// int	main(void)
// {
//     char s[] = "Hello, world!";
//     ft_striteri(s, print_index_and_char);
//     return 0;
// }