/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:02:11 by ehay              #+#    #+#             */
/*   Updated: 2023/10/23 15:39:58 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}

// int main(void)
// {
// 	char textbon = 'Z';
// 	char notext = '5';
//     printf("%d", ft_isalpha(textbon));
// 	printf("\n");
// 	printf("%d", ft_isalpha(notext));
// }