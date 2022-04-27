/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:37:02 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/26 11:41:03 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, unsigned long n)
{
	unsigned int	pos;
	unsigned char	c1;
	unsigned char	c2;

	pos = 0;
	while (pos < n)
	{
		c1 = ((unsigned char *)s1)[pos];
		c2 = ((unsigned char *)s2)[pos];
		if (c1 != c2)
			return (c1 - c2);
		pos++;
	}
	return (0);
}

/*int	main(void)
{
	char			str1[50] = "hola cono estamos compañero";
	char			str2[50] = "hola como estamos compañero";
	unsigned long	n;

	n = 20;
	printf("ft: %d\n", ft_memcmp(str1, str2, n));
	printf("original: %d", memcmp(str1, str2, n));
}*/