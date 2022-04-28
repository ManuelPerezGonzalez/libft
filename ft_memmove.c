/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:37:02 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/28 11:26:10 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned long len)
{
	unsigned int	pos;

	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	else
	{
		pos = 0;
		while (pos < len)
		{
			((char *)dst)[pos] = ((char *)src)[pos];
			pos++;
		}
	}
	return (dst);
}

/* int	main(void)
{
	char			dst1[50] = "hey, how are you my friend";
	char			dst2[50] = "hey, how are you my friend";
	char			src[50] = "whatcha doin'";
	unsigned long	n;

	n = 17;
	printf("dst original: %s\n", dst1);
	printf("src: %s\n", src);
	ft_memmove(dst1, src, n);
	printf("dst modified: %s\n", dst1);
	memmove(dst2, src, n);
	printf("dst modified: %s", dst2);
}
 */