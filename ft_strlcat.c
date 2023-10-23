/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:58:51 by ehay              #+#    #+#             */
/*   Updated: 2023/10/17 12:58:51 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	length;

	length = 0;
	i = 0;
	while (dst[length] && length < size)
		length++;
	while (src[i] && size && length + i < size - 1)
	{
		dst[length + i] = src[i];
		i++;
	}
	if (length < size)
		dst[length + i] = 0;
	i = 0;
	while (src[i])
		i++;
	return (length + i);
}

// int main(void)
// {
// 	char test1[20] = "salut";
// 	char *test2 = "toilala";
//     printf("%i \n", ft_strlcat(test1, test2, 6));
//     printf("%s \n", test1);
// 	return (0);
// }