/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:28:49 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/26 11:40:50 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, unsigned long n)
{
	unsigned int	pos;

	pos = 0;
	while (pos < n)
	{
		((char *)s)[pos] = '\0';
		pos++;
	}
}

/*int	main(void)
{
	char	str[50] = "hola que ase";

	ft_bzero(str, 5);
	printf("%s\n", &str[5]);
	bzero(str, 1);
	printf("%s", &str[6]);
}*/