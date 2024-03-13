/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:58:18 by prutkows          #+#    #+#             */
/*   Updated: 2024/02/27 10:58:22 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"


int	ft_isprint(int a)
{
	if (a >= 32 && a <= 126)
		return (1);
	return (0);
}
// int	main(void)
// {
// 	int	var1;
// 	int	var2;
// 	int	var3;
// 	int	var4;

// 	var1 = 'k';
// 	var2 = '8';
// 	var3 = '\t';
// 	var4 = ' ';
// 	if (ft_isprint(var1))
// 	{
// 		printf("var1 = |%c| can be printed\n", var1);
// 	}
// 	else
// 	{
// 		printf("var1 = |%c| can't be printed\n", var1);
// 	}
// 	if (ft_isprint(var2))
// 	{
// 		printf("var2 = |%c| can be printed\n", var2);
// 	}
// 	else
// 	{
// 		printf("var2 = |%c| can't be printed\n", var2);
// 	}
// 	if (ft_isprint(var3))
// 	{
// 		printf("var3 = |%c| can be printed\n", var3);
// 	}
// 	else
// 	{
// 		printf("var3 = |%c| can't be printed\n", var3);
// 	}
// 	if (ft_isprint(var4))
// 	{
// 		printf("var4 = |%c| can be printed\n", var4);
// 	}
// 	else
// 	{
// 		printf("var4 = |%c| can't be printed\n", var4);
// 	}
// 	return (0);
// }
