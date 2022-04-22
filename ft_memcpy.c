/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:37:02 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/22 12:18:10 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memcpy(void *dst, const void *src, unsigned long n)
{
	void			*orig_dst;
	unsigned int	pos;
	unsigned int	dstlen;
	unsigned int	srclen;

	if (!dst || !src)
		return (0);
	pos = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	orig_dst = dst;
	while (pos < n && pos < dstlen && pos < srclen)
	{
		((unsigned char *)dst)[pos] = ((unsigned char *)src)[pos];
		pos++;
	}
	return (orig_dst);
}

/*int	main(void)
{
	char			dst1[50] = "hola como estamos compañero";
	char			dst2[50] = "hola como estamos compañero";
	char			src[50] = "que ase";
	unsigned long	n;

	n = 5;
	printf("dst original: %s\n", dst1);
	printf("src: %s\n", src);
	ft_memcpy(dst1, src, n);
	printf("dst modificado: %s\n", dst1);
	memcpy(dst2, src, n);
	printf("dst modificado: %s", dst2);
}*/