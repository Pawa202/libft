/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:25:46 by prutkows          #+#    #+#             */
/*   Updated: 2024/02/27 10:25:48 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(char a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0'
			&& a <= '9'))
		return (1);
	return (0);
}
// int	main(void)
// {
// 	int var1 = 'd';
// 	int var2 = '2';
// 	int var3 = '\t';
// 	int var4 = ' ';

// 	if (ft_isalnum(var1))
// 	{
// 		printf("var1 = |%c| is alphanumeric\n", var1);
// 	}
// 	else
// 	{
// 		printf("var1 = |%c| is not alphanumeric\n", var1);
// 	}
// 	if (ft_isalnum(var2))
// 	{
// 		printf("var2 = |%c| is alphanumeric\n", var2);
// 	}
// 	else
// 	{
// 		printf("var2 = |%c| is not alphanumeric\n", var2);
// 	}

// 	if (ft_isalnum(var3))
// 	{
// 		printf("var3 = |%c| is alphanumeric\n", var3);
// 	}
// 	else
// 	{
// 		printf("var3 = |%c| is not alphanumeric\n", var3);
// 	}

// 	if (ft_isalnum(var4))
// 	{
// 		printf("var4 = |%c| is alphanumeric\n", var4);
// 	}
// 	else
// 	{
// 		printf("var4 = |%c| is not alphanumeric\n", var4);
// 	}

// 	return (0);
// }