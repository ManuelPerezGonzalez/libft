/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:12:29 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/21 18:38:01 by maperez-         ###   ########.fr       */
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
