/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:37:31 by ehay              #+#    #+#             */
/*   Updated: 2023/10/17 12:37:31 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>           // printf
# include <unistd.h>          // write
# include <string.h>          // fonction string
# include <stdlib.h>          // malloc()
# include <stddef.h>          // size_t

// fonction base
int			ft_atoi(const char *str);
void		*ft_bzero(void *b, int len);
void		*ft_calloc(int nb_elements, int taille_elements);
int			ft_isalnum(char text);
int			ft_isalpha(char text);
int			ft_isascii(int text);
int			ft_isdigit(char text);
int			ft_isprint(int text);
void		*ft_memchr(const void *text, int lettre, int nb);
int			ft_memcmp(const void *comp1, const void *comp2, int nb);
void		*ft_memcpy(void *dst, const void *src, int n);
void		*ft_memmove(void *dst, const void *src, int len);
void		*ft_memset(void *b, int c, int len);
char		*ft_strchr(const char *text, char lettre);
char		*ft_strdup(char *src);
int			ft_strlcat(char *dest, char *src, int size);
int			ft_strlcpy(char *dest, char *src, unsigned int n);
int			ft_strlen(const char *str);
int			ft_strncmp(char *s1, char *s2, unsigned int n);
char		*ft_strnstr(const char *str, const char *to_find, int nb);
char		*ft_strrchr(char *text, char lettre);
int			ft_tolower(char text);
int			ft_toupper(char text);

//fonction en plus
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char *s1, char const *set);
char		**ft_split(char *str, char *charset);

// Bonus
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

#endif