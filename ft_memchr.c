/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:37:02 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/26 11:41:01 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned long n)
{
	unsigned int		pos;
	const unsigned char	*string;

	pos = 0;
	string = s;
	while (pos < n)
	{
		if (string[pos] == (unsigned char)c)
			return ((void *)s + pos);
		pos++;
	}
	return (0);
}

/*int	main(void)
{
	char			str[50] = "hola como estamos compañero";
	unsigned long	n;

	n = 5;
	printf("String: %s\n", str);
	printf("Character: %c\n", 'a');
	printf("Resultado ft: %s\n", ft_memchr(str, 'a', n));
	printf("Resultado: %s", memchr(str, 'a', n));
}*/