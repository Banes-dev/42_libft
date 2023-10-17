/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:04:11 by ehay              #+#    #+#             */
/*   Updated: 2023/10/17 13:01:41 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int text)
{
	return (text >= 0 && text <= 127);
}

// int main(void)
// {
// 	char textbon = '5';
// 	char notext = 'n';
//     printf("%d", ft_isascii(textbon));
// 	printf("\n");
// 	printf("%d", ft_isascii(notext));
// }