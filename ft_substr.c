/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:30:35 by ehay              #+#    #+#             */
/*   Updated: 2023/10/18 16:13:07 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	substring = (char *)malloc(len + 1);
	if (!substring)
	{
		return (NULL);
	}
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

// int main() {
//     char source[] = "Hello, World!";
//     unsigned int start = 7;
//     size_t len = 5;

//     char *substring = ft_substr(source, start, len);
//     if (substring) {
//         printf("Sous-chaîne : %s\n", substring);
//         free(substring); // Libérez la mémoire allouée dynamiquement
//     } else {
//         printf("Erreur d'allocation mémoire.\n");
//     }

//     return 0;
// }