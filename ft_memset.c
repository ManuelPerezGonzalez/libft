/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:37:02 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/26 13:58:46 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, unsigned long len)
{
	unsigned int	pos;

	pos = 0;
	while (pos < len)
	{
		((unsigned char *)b)[pos] = c;
		pos++;
	}
	return (b);
}

/* int	main(void)
{
	char	str[50] = "hola que ase";

	printf("%s\n", ft_memset(str, 'A', 16));
	printf("%s", memset(str, 'A', 16));
}
 */