/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:50:43 by ehay              #+#    #+#             */
/*   Updated: 2023/10/19 11:48:34 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size1;
	int		size2;
	int		totalsize;
	char	*result;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	totalsize = size1 + size2;
	result = malloc(totalsize * sizeof(char));
	if (!result)
	{
		return (NULL);
	}
	return (result);
}

// int main(void)
// {
// 	char *strings[] = {"Hello", "world", "from", "ft_strjoin!"};

// 	char *result = ft_strjoin(strings[1], strings[2]);
// 	printf("%s\n", result);
// 	free(result);
//     return (0);
// }