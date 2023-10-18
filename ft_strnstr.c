/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:01:45 by ehay              #+#    #+#             */
/*   Updated: 2023/10/18 12:26:30 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, int nb)
{
	int	i;
	int	j;

	i = 0;
	if (!str || !to_find)
		return (NULL);
	if (!to_find || !to_find[0])
		return ((char *)str);
	while (str[i] && i < nb)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j] && to_find[j])
				j++;
			if (to_find[j] == 0)
				return ((char *)(str + i));
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