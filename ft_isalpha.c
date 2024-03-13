/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:55:44 by prutkows          #+#    #+#             */
/*   Updated: 2024/02/26 15:55:47 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (c);
	return (0);
}

// int	main(void)
// {
// 	char	ch1;
// 	char	ch2;

// 	ch1 = 'A';
// 	ch2 = '3';
// 	printf("%s\n", ft_isalpha(ch1) ? "True" : "False"); // True
// 	printf("%s\n", ft_isalpha(ch2) ? "True" : "False"); // False
// 	return (0);
// }
