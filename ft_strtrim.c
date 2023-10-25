/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:49:26 by ehay              #+#    #+#             */
/*   Updated: 2023/10/25 13:02:19 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_strlen(const char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

static char	*find_begin(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		in_set;

	in_set = 0;
	i = 0;
	j = 0;
	while (s1[i])
	{
		in_set = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				in_set = 1;
			j++;
		}
		if (!in_set)
			break ;
		i++;
	}
	return ((char *) s1 + i);
}

static char	*find_end(char const *s1, char const *set, char const *begin)
{
	size_t	i;
	size_t	j;
	int		in_set;

	in_set = 0;
	i = ft_strlen(s1) - 1;
	j = 0;
	while (s1 + i >= begin)
	{
		in_set = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				in_set = 1;
			j++;
		}
		if (!in_set)
			break ;
		i--;
	}
	if (s1 + i < begin)
		return ((char *) begin);
	return ((char *) s1 + i);
}

static char	*fill_str(char const *begin, char const *end)
{
	char	*new;
	size_t	i;

	new = malloc(sizeof(char) * (end - begin + 2));
	if (!new)
		return (NULL);
	i = 0;
	while (begin + i <= end)
	{
		new[i] = begin[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*begin;
	char	*end;
	char	*new;

	begin = find_begin(s1, set);
	end = find_end(s1, set, s1);
	if (!s1[0] || end < begin)
	{
		new = malloc(sizeof(char) * 1);
		if (!new)
			return (NULL);
		new[0] = '\0';
	}
	else
		new = fill_str(begin, end);
	if (!new)
		return (NULL);
	return (new);
}

// int main()
// {
// 	char atrrim[] = "TjajT";
// 	char trouver = 'T';
//     char *result = ft_strtrim(atrrim, &trouver);

//     if (result)
//     {
//         printf("%s lala\nici", result);
//         free(result);
//     }
// }