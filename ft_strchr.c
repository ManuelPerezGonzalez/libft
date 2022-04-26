/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 09:34:10 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/25 13:22:07 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h> */

char	*ft_strchr(const char *s, int c)
{
	int	pos;

	pos = 0;
	if ((unsigned char)c == '\0')
		return ((char *)s);
	while (s[pos])
	{
		if ((unsigned char)s[pos] == (unsigned char)c)
			return ((char *)(&s[pos]));
		pos++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	str[50] = "hola que tal estamos";

	printf("%s", ft_strchr(str, 'a'));
	return (0);
}
 */