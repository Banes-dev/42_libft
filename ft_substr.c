/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:30:35 by ehay              #+#    #+#             */
/*   Updated: 2023/10/24 17:06:14 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;

	if (start >= ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (start + i < ft_strlen(s) && i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
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