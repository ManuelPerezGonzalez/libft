/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:12:29 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/26 11:41:10 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned long size)
{
	unsigned long	pos;

	pos = 0;
	if (size == 0)
		return (0);
	while ((s1[pos] == s2[pos]) && (pos < size - 1) && (s1[pos] != '\0'))
		pos++;
	return ((unsigned char)s1[pos] - (unsigned char)s2[pos]);
}

/* int	main(void)
{
	char	str1[50] = "hola que";
	char	str2[50] = "tal estas?";

	printf("%d\n", ft_strncmp(str2, str1, 2));
	return (0);
}
 */