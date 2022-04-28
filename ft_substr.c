/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 09:34:10 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/28 09:26:20 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	return (a);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	pos;
	char	*substr;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
	{
		substr = (char *)ft_calloc(sizeof(char), 1);
		if (!substr)
			return (0);
		return (substr);
	}	
	substr = (char *)malloc(sizeof(char) * (ft_min(ft_strlen(s), len) + 1));
	if (!substr)
		return (0);
	pos = 0;
	while (pos != ft_min(ft_strlen(s), len))
	{
		substr[pos] = s[start];
		pos++;
		start++;
	}
	substr[pos] = '\0';
	return (substr);
}

/* int	main(void)
{
	char	str[50] = "hola que tal estamos";
	
	printf("%s\n", ft_substr(str, 22, 10));
	return (0);
}
 */