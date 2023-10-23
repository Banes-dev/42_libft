/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:20:56 by ehay              #+#    #+#             */
/*   Updated: 2023/10/23 16:07:20 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
	}
	return (c);
}

// int main(void)
// {
// 	char textbon = 'A';
// 	char notext = 'z';
//     printf("%c", ft_tolower(textbon));
// 	printf("\n");
// 	printf("%c", ft_tolower(notext));
// }