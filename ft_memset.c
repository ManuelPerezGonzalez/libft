/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:37:02 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/22 12:15:25 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memset(void *b, int c, unsigned long len)
{
	unsigned int	pos;
	unsigned int	l;

	pos = 0;
	l = ft_strlen((unsigned char *)b);
	while (pos < len && pos < l)
	{
		((unsigned char *)b)[pos] = (unsigned char)c;
		pos++;
	}
	return (b);
}

/*int	main(void)
{
	char	str[50] = "hola que ase";

	printf("%s\n", ft_memset(str, 'B', 5));
	printf("%s", memset(str, 'B', 5));
}*/