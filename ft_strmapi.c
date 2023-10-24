/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:41:42 by ehay              #+#    #+#             */
/*   Updated: 2023/10/24 12:32:23 by ehay             ###   ########.fr       */
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

char	*ft_strdup(char const *src)
{
	char	*renv;
	int		i;

	i = 0;
	if (src == NULL)
	{
		return (NULL);
	}
	renv = (char *)malloc(ft_strlen(src) + 1);
	if (renv == NULL)
	{
		free(renv);
		return (NULL);
	}
	while (src[i])
	{
		renv[i] = src[i];
		i++;
	}
	renv[i] = '\0';
	return (renv);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	str = ft_strdup(s);
	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return (str);
}

// char transform(unsigned int index, char c) {
//     return c + index;
// }

// int main() {
//     char *input = "Hello, World!";
//     char *output = ft_strmapi(input, transform);

//     if (output != NULL) {
//         printf("Transformed string: %s\n", output);
//         free(output);
//     }

//     return 0;
// }