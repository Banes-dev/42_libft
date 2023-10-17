/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:37:57 by ehay              #+#    #+#             */
/*   Updated: 2023/10/17 16:59:05 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *text, int lettre, int nb)
{
	int	i;

	i = 0;
	if (!text)
	{
		return (NULL);
	}
	while (i < nb)
	{
		if (*(unsigned char *)(text + i) == (unsigned char)lettre)
		{
			return ((void *)(text + i));
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