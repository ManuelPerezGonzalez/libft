/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:12:29 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/26 11:41:08 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcat(char *dst, const char *src, unsigned long size)
{
	unsigned long	srcpos;
	unsigned long	dstpos;

	dstpos = ft_strlen(dst);
	srcpos = 0;
	if (size <= dstpos)
		return (size + ft_strlen(src));
	while (src[srcpos] && dstpos < size - 1)
	{
		dst[dstpos] = src[srcpos];
		dstpos++;
		srcpos++;
	}
	dst[dstpos] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[srcpos]));
}
