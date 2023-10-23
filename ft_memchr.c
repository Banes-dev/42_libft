/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:37:57 by ehay              #+#    #+#             */
/*   Updated: 2023/10/23 15:42:17 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!s)
	{
		return (NULL);
	}
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char textbon[] = "ABcdTGzw";
// 	char notext = 'g';
// 	if (ft_memchr(textbon, notext, 8))
// 	{
// 		printf("L octet a ete trouver");
// 		printf("\n");
// 	}else
// 	{
// 		printf("L octet pas ete trouver ...");
// 		printf("\n");
// 	}
// }