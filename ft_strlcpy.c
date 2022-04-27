/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:12:29 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/26 14:51:07 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long dstsize)
{
	unsigned long	srcsize;
	unsigned long	pos;

	srcsize = ft_strlen(src);
	pos = 0;
	while (src[pos] && pos + 1 < dstsize)
	{
		dst[pos] = src[pos];
		pos++;
	}
	if (dstsize)
		dst[pos] = '\0';
	return (srcsize);
}

/* int	main(void)
{
	char	dst[50] = "hola que tal estamos";
	char	src[50] = "que hay";

	printf("%lu\n", ft_strlcpy(dst, src, 15));
	return (0);
}
 */