/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 09:34:10 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/29 12:08:08 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	pos1;
	unsigned int	pos2;

	if (!s1 || !set)
		return (NULL);
	pos1 = 0;
	while (s1[pos1] && ft_strchr(set, s1[pos1]))
		pos1++;
	pos2 = ft_strlen(s1);
	while (pos2 != 0 && ft_strchr(set, s1[pos2]))
		pos2--;
	if ((pos2 - pos1 + 1) <= 0)
		return (ft_calloc(1, 1));
	return (ft_substr(s1, pos1, (pos2 - pos1 + 1)));
}

/* int	main(void)
{
	char	str1[50] = "hola que";
	char	str2[50] = " tal estamos";
	char	set1[10] = "houe";
	char	set2[10] = "s to";
	
	printf("%s\n", ft_strtrim(str1, set1));
	printf("%s\n", ft_strtrim(str2, set2));
	return (0);
}
 */