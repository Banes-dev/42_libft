/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:01:26 by ehay              #+#    #+#             */
/*   Updated: 2023/10/23 15:38:48 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90)
		|| (c >= '0' && c <= '9'));
}

// int main(void)
// {
// 	char textbon = 'A';
// 	char notext = ';';
//     printf("%d", ft_isalnum(textbon));
// 	printf("\n");
// 	printf("%d", ft_isalnum(notext));
// }