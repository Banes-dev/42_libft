/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:01:45 by ehay              #+#    #+#             */
/*   Updated: 2023/10/23 16:10:23 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!big || !little)
		return (NULL);
	if (!little || !little[0])
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i + j] == little[j] && little[j])
				j++;
			if (little[j] == 0)
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char test1[] = "salut comment sa va ?";
// 	char test2[] = "sa va";
// 	printf("%s", ft_strnstr(test1, test2, 20));
// 	printf("\n");
// 	return (0);
// }