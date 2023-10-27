/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:31:56 by ehay              #+#    #+#             */
/*   Updated: 2023/10/17 12:31:56 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i + 1 < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dst[i] = '\0';
		i++;
	}
	return (ft_strlen(src));
}

// int	main()
// {
// 	char src[] = "Source";
// 	char dest[] = "World1";

// 	printf("%i", ft_strlcpy(dest, src, 3));
//     printf("%s", dest);
// 	printf("\n%i", ft_strlcpy(dest, src, 5));
//     printf("%s", dest);
// 	printf("\n%i", ft_strlcpy(dest, src, 7));
//     printf("%s", dest);
// }