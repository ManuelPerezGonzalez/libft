/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:40:31 by maperez-          #+#    #+#             */
/*   Updated: 2022/06/28 11:35:59 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checker(const char *str, va_list args, int pos)
{
	int	i;

	i = 0;
	if (str[pos] == 'c')
		i += ft_putchar_pf(va_arg(args, int));
	else if (str[pos] == 's')
		i += ft_putstr_pf(va_arg(args, char *));
	else if (str[pos] == 'p')
	{
		i += ft_putstr_pf("0x");
		i += ft_puthexmin(va_arg(args, unsigned long long));
	}
	else if (str[pos] == 'd' || str[pos] == 'i')
		i += ft_putnbr_pf(va_arg(args, int));
	else if (str[pos] == 'u')
		i += ft_putten(va_arg(args, unsigned int));
	else if (str[pos] == 'x')
		i += ft_puthexmin(va_arg(args, unsigned int));
	else if (str[pos] == 'X')
		i += ft_puthexmay(va_arg(args, unsigned int));
	else if (str[pos] == '%')
		i += ft_putchar_pf('%');
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		pos;
	int		char_count;

	if (str == NULL)
		return (0);
	va_start(args, str);
	pos = 0;
	char_count = 0;
	while (str[pos])
	{
		if (str[pos] == '%')
			char_count += ft_checker(str, args, ++pos);
		else
		{
			ft_putchar(str[pos]);
			char_count++;
		}
		pos++;
	}
	va_end(args);
	return (char_count);
}

/* int	main(void)
{
	printf("%d\n", ft_printf("%u\n", -42));
	printf("%d\n", printf("%u\n", -42));
	return (0);
} */
