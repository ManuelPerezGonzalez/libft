/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:22:58 by maperez-          #+#    #+#             */
/*   Updated: 2022/05/09 11:57:17 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	w_num;
	int	trigger;

	w_num = 0;
	trigger = 0;
	while (*s)
	{
		if (*s != c && trigger == 0)
		{
			trigger = 1;
			w_num++;
		}
		else if (*s == c)
			trigger = 0;
		s++;
	}
	return (w_num);
}

static char	*ft_create_word(const char *s, int start, int finish)
{
	char	*word;
	int		pos;

	word = (char *)malloc(sizeof(char) * (finish - start + 1));
	if (!word)
		return (0);
	pos = 0;
	while (start < finish)
	{
		word[pos] = s[start];
		pos++;
		start++;
	}
	word[pos] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char			**str;
	unsigned long	pos1;
	unsigned long	pos2;
	int				index;

	str = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!s || !str)
		return (0);
	pos1 = 0;
	pos2 = 0;
	index = -1;
	while (pos1 <= ft_strlen(s))
	{
		if (s[pos1] != c && index < 0)
			index = pos1;
		else if (index >= 0 && (s[pos1] == c || pos1 == ft_strlen(s)))
		{
			str[pos2] = ft_create_word(s, index, pos1);
			index = -1;
			pos2++;
		}
		pos1++;
	}
	str[pos2] = 0;
	return (str);
}

/* int	main(void)
{
	char	str[] = "";
	int		pos;
	int		count;

	count = 0;
	pos = 0;
	while (str[pos])
	{
		if (str[pos] == ' ')
			count++;
		pos++;
	}
	pos = 0;
	while (pos <= count)
	{
		printf("%s\n", ft_split(str, ' ')[pos]);
		pos++;
	}
	return (0);
}
 */