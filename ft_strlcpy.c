/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:12:29 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/25 10:34:59 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long dstsize)
{
	unsigned long	srcsize;
	unsigned long	pos;

	if (!dst || !src)
		return (0);
	srcsize = ft_strlen(src);
	pos = 0;
	if (dstsize != 0)
	{
		while (src[pos] && pos < (dstsize - 1))
		{
			dst[pos] = src[pos];
			pos++;
		}
		dst[pos] = '\0';
	}
	return (srcsize);
}
