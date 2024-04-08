/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:15:16 by prutkows          #+#    #+#             */
/*   Updated: 2024/03/11 14:15:17 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	while (*str)
	{
		write(fd, str++, 1);
	}
	write(fd, "\n", 1);
}

// int main()
// {
//     ft_putendl_fd("Hello, World!", STDOUT_FILENO);
//     return (0);
// }
