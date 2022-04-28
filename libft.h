/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 08:47:56 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/28 16:55:27 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				ft_bzero(void *s, unsigned long n);
void				*ft_calloc(unsigned long count, unsigned long size);
/* IS */
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
/* LST */
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *lst);
/* PUT */
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);
/* TO */
int					ft_atoi(const char *str);
char				*ft_itoa(int n);
int					ft_toupper(int c);
int					ft_tolower(int c);
/* STR */
char				**ft_split(char const *s, char c);
void				ft_striteri(char *s, void (*f)(unsigned iny, char *));
unsigned long		ft_strlen(const char *s);
unsigned long		ft_strlcpy(char *dst, const char *src,
						unsigned long dstsize);
unsigned long		ft_strlcat(char *dst, const char *src, unsigned long size);
char				*ft_strdup(const char *s1);
char				*ft_strchr(const char *s, int c);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strrchr(const char *s, int c);
int					ft_strncmp(const char *s1, const char *s2,
						unsigned long size);
char				*ft_strnstr(const char *s1, const char *s2,
						unsigned long size);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_substr(char const *s, unsigned int start,
						unsigned long len);
/* MEM */
void				*ft_memset(void *b, int c, unsigned long len);
void				*ft_memchr(const void *s, int c, unsigned long n);
void				*ft_memcpy(void *dst, const void *src, unsigned long n);
void				*ft_memmove(void *dst, const void *src, unsigned long len);
int					ft_memcmp(const void *s1, const void *s2, unsigned long n);

#endif
