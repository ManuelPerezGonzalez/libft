/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 10:55:23 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/27 12:07:50 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned long count, unsigned long size)
{
	char			*dst;
	unsigned long	total;
	unsigned int	pos;

	if ((count >= __SIZE_MAX__ && size > 1)
		|| (size >= __SIZE_MAX__ && count > 1))
		return (0);
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