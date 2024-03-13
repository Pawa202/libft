/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:22:35 by prutkows          #+#    #+#             */
/*   Updated: 2024/02/29 14:22:36 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"


int	ft_toupper(char a)
{
	if (a >= 'a' && a <= 'z')
	{
		return (a - 32);
	}
	else
	{
		return (a);
	}
}
// int main(void)
// {
//     char lowercase = 'a';
//     char uppercase = ft_toupper(lowercase);

//     printf("Original character: %c\n", lowercase);
//     printf("Uppercase character: %c\n", uppercase);

//     return (0);
// }