/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:49:26 by ehay              #+#    #+#             */
/*   Updated: 2023/10/23 12:24:32 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

static int
	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_char_in_set(s1[start], set))
		start++;
	while (end > start && ft_char_in_set(s1[end - 1], set))
		end--;
	str = (char *)malloc((end - start + 1) * sizeof(s1));
	if (!str)
	{
		free(str);
		return (NULL);
	}
	i = 0;
	while (start < end)
	{
		str[i] = s1[start++];
		i++;
	}
	str[i] = '\0';
	printf("%s\n", str);
	return (str);
}

int main()
{
	char atrrim[] = "TjajT";
	char trouver = 'T';
    char *result = ft_strtrim(atrrim, &trouver);

    if (result)
    {
        printf("%s lala\nici", result);
        free(result);
    }
}