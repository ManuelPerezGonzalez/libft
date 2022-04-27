/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:16:10 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/27 10:37:09 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_nlen(long a)
{
	unsigned long	len;

	len = 0;
	if (a < 0)
	{
		a = -a;
		len++;
	}
	while (a > 0)
	{
		a /= 10;
		len++;
	}
	return (len);
}

char	*ft_zero(char *str)
{
	str = (char *)malloc(sizeof(char) * 2);
	if (!str)
		return (0);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	long			a;
	char			*str;
	unsigned long	len;

	a = n;
	len = ft_nlen(a);
	str = 0;
	if (a == 0)
		return (ft_zero(str));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len--] = '\0';
	if (a < 0)
	{
		str[0] = '-';
		a = -a;
	}
	while (a > 0)
	{
		str[len] = (a % 10) + '0';
		a /= 10;
		len--;
	}
	return (str);
}

/* int	main(void)
{
	int	n;

	n = -2147483648;
	printf("%s", ft_itoa(n));
	return (0);
}
 */