/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 08:47:56 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/23 13:52:18 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int				ft_atoi(const char *str);
void			ft_bzero(void *s, unsigned long n);
void			*ft_calloc(unsigned long count, unsigned long size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
unsigned long	ft_strlen(const char *s);
unsigned long	ft_strlcpy(char *dst, char *src, unsigned long dstsize);
unsigned long	ft_strlcat(char *dst, char *src, unsigned long size);
char			*ft_strdup(const char *s1);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, unsigned long size);
char			*ft_strnstr(const char *s1, const char *s2, unsigned long size);
void			*ft_memset(void *b, int c, unsigned long len);
void			*ft_memchr(const void *s, int c, unsigned long n);
void			*ft_memcpy(void *dst, const void *src, unsigned long n);
void			*ft_memmove(void *dst, const void *src, unsigned long len);
int				ft_memcmp(const void *s1, const void *s2, unsigned long n);

#endif
