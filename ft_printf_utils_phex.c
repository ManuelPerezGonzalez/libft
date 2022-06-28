/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_phex.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 10:23:06 by maperez-          #+#    #+#             */
/*   Updated: 2022/06/20 14:09:01 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putten(long nb)
{
	static int	i;

	i = 0;
	if (nb >= 0 && nb <= 4294967295)
	{
		if (nb > 9)
		{
			ft_putten(nb / 10);
			nb %= 10;
		}
	}
	ft_putchar(nb + '0');
	i++;
	return (i);
}

int	ft_puthexmin(unsigned long long nb)
{
	static int	i;

	i = 0;
	if (nb >= 16)
		ft_puthexmin(nb / 16);
	ft_putchar("0123456789abcdef"[nb % 16]);
	i++;
	return (i);
}

int	ft_puthexmay(unsigned long long nb)
{
	static int	i;

	i = 0;
	if (nb >= 16)
		ft_puthexmay(nb / 16);
	ft_putchar("0123456789ABCDEF"[nb % 16]);
	i++;
	return (i);
}
