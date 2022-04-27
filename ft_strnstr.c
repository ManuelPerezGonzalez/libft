/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:12:29 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/26 11:41:11 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, unsigned long size)
{
	unsigned long	pos1;
	unsigned long	pos2;

	pos1 = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[pos1] != '\0')
	{
		pos2 = 0;
		while (s1[pos1 + pos2] == s2[pos2] && (pos1 + pos2) < size
			&& s1[pos1 + pos2] && s2[pos2])
			pos2++;
		if (s2[pos2] == '\0')
			return ((char *)s1 + pos1);
		pos1++;
	}
	return (0);
}
