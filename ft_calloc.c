/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prutkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:22:01 by prutkows          #+#    #+#             */
/*   Updated: 2024/03/07 17:22:04 by prutkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size) // allocate memory and set it to zero
{
	unsigned char	*ptr;
	int			i;

	i = 0;
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	while (i < count * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

// int	main(void)
// {
// 	size_t	count;
// 	size_t	size;
// 	int		*array;
//
// 	count = 5;
// 	size = sizeof(int);
// 	array = (int *)ft_calloc(count, size);
// 	if (array == NULL)
// 	{
// 		printf("Failed to allocate memory\n");
// 		return (1);
// 	}
// 	for (size_t i = 0; i < count; i++)
// 	{
// 		printf("%d ", array[i]);
// 	}
// 	free(array);
// 	return (0);
// }
