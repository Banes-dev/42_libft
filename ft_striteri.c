/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:26:06 by ehay              #+#    #+#             */
/*   Updated: 2023/10/20 12:40:31 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *c))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, s + i);
		i++;
	}
}

// void	transform(unsigned int index, char *c)
// {
//     printf("Caractère à l'index %u : %c\n", index, *c);
// }

// int main() {
//     char str[] = "Hello, World!";
//     ft_striteri(str, transform);
//     return 0;
// }