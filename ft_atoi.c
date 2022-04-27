/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:46:57 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/26 11:40:48 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	pos;
	int	sign;
	int	res;

	pos = 0;
	sign = 1;
	res = 0;
	while ((str[pos] && str[pos] >= '\t' && str[pos] <= '\r')
		|| str[pos] == ' ')
		pos++;
	if (str[pos] == '+' || str[pos] == '-')
	{
		if (str[pos++] == '-')
			sign = -1;
	}
	while ((str[pos] >= '0' && str[pos] <= '9') && str[pos] != '\0')
	{
		res = (str[pos] - '0') + (res * 10);
		pos++;
	}
	return (res * sign);
}

/*int	main(void)
{
	printf("%d\n", ft_atoi("-45hf736"));
	printf("%d", atoi("-45hf736"));
}*/