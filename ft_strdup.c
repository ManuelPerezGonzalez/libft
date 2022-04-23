/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 09:34:10 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/23 13:48:53 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <stdlib.h>
#include <string.h> */

char	*ft_strdup(const char *s1)
{
	unsigned int	len;
	unsigned int	pos;
	char			*dst;

	len = ft_strlen(s1);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (0);
	pos = 0;
	while (pos < len)
	{
		dst[pos] = s1[pos];
		pos++;
	}
	dst[pos] = '\0';
	return (dst);
}

/* int	main(void)
{
	printf("%s\n", ft_strdup("hola como estamos"));
	printf("%s\n", strdup("hola como estamos"));
	return (0);
}
 */