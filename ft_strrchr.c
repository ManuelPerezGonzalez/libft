/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 09:34:10 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/25 13:22:19 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h> */

char	*ft_strrchr(const char *s, int c)
{
	int	pos;

	pos = ft_strlen(s);
	while (pos > 0)
	{
		if ((unsigned char)s[pos] == (unsigned char)c)
			return ((char *)s + pos);
		pos--;
	}
	return (0);
}

/* int	main(void)
{
	char	str[50] = "hola que tal estamos";

	printf("%s", ft_strrchr(str, 'a'));
	return (0);
}
 */