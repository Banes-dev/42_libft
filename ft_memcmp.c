/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:23:34 by ehay              #+#    #+#             */
/*   Updated: 2023/10/18 12:00:19 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *comp1, const void *comp2, int nb)
{
	const unsigned char	*p1 = comp1;
	const unsigned char	*p2 = comp2;

	while (nb--)
	{
		if (*p1 > *p2)
		{
			return (*p1 - *p2);
		}
		else if (*p1 < *p2)
		{
			return (*p1 - *p2);
		}
		p1++;
		p2++;
	}
	return (0);
}

// int main(void)
// {
// 	char test1[] = "heeeeeeeeeeeeee";
// 	char test2[] = "he";
// 	printf("%i", ft_memcmp(test1, test2, 8));
// 	printf("\n");
// 	printf("%i", memcmp(test1, test2, 8));
// 	printf("\n");
// }