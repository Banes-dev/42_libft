/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:41:42 by ehay              #+#    #+#             */
/*   Updated: 2023/10/25 13:19:47 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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