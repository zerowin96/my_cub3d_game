/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euiclee <euiclee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:54:27 by euiclee           #+#    #+#             */
/*   Updated: 2023/03/31 18:57:29 by euiclee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

# define FALSE 0
# define TRUE 1

# define BUFFER_SIZE 1024

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* libft */

long long	ft_atoll(const char *str);

void		ft_bzero(void *s, size_t n);
void		ft_putnbr_fd(int n, int fd);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_assert(int expression, char *msg, int error_code);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstiter(t_list *lst, void (*f)(void *));
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));

void		*ft_calloc(size_t count, size_t size);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);

char		*ft_itoa(int n);
char		*get_next_line(int fd);
char		*ft_strdup(const char *s1);
char		*ft_strcat(char *s1, char *s2);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strfind(char **str, char *find);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_strstr(const char *haystack, const char *needle);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);

char		**ft_split(char const *s, char c);

int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_isstrdigit(char *str);
int			ft_lstsize(t_list *lst);
int			ft_atoi(const char *str);
int			ft_strchrnum(char *str, char ch);
int			ft_stronly(char *str, char *target);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strtarget(const char *str, const char *target);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
int			ft_strncmp(const char *s1, const char *s2, size_t n);

double		ft_atod(char *str);

t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstnew(void *content);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

size_t		ft_strlen(const char *s);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);

#endif