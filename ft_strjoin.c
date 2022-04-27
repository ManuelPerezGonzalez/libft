/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 09:34:10 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/27 10:04:10 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	pos1;
	unsigned int	pos2;
	char			*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if ((!s1 && !s2) || !str)
		return (0);
	pos1 = 0;
	while (s1[pos1] != '\0')
	{
		str[pos1] = s1[pos1];
		pos1++;
	}
	pos2 = 0;
	while (s2[pos2] != '\0')
		str[pos1++] = s2[pos2++];
	str[pos1] = '\0';
	return (str);
}

/* int	main(void)
{
	char	str1[50] = "hola que";
	char	str2[50] = " tal estamos";
	
	printf("%s\n", ft_strjoin(str1, str2));
	return (0);
}
 */