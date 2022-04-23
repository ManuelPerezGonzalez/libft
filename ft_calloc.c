/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 10:55:23 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/23 11:46:02 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

void	*ft_calloc(unsigned long count, unsigned long size)
{
	char			*dst;
	unsigned int	total;
	unsigned int	pos;

	total = count * size;
	dst = malloc(total);
	if (!dst)
		return (0);
	pos = 0;
	while (total > 0)
	{
		dst[pos] = 0;
		total--;
		pos++;
	}
	return ((void *)dst);
}

/*int	main(void)
{
	unsigned long	res;

	printf("%d\n", (int)ft_calloc(6, 6));
	printf("%d", (int)calloc(6, 6));
}*/