/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:12:19 by ehay              #+#    #+#             */
/*   Updated: 2023/10/23 16:07:38 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
	}
	return (c);
}

// int main(void)
// {
// 	char textbon = 'a';
// 	char notext = 'A';
//     printf("%c", ft_toupper(textbon));
// 	printf("\n");
// 	printf("%c", ft_toupper(notext));
// }