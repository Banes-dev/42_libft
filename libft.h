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

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct s_split_next
{
	size_t	start;
	size_t	length;
}				t_split_next;

size_t			ft_strlen(char *str);

#endif