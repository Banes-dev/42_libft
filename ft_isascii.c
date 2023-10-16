/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:04:11 by ehay              #+#    #+#             */
/*   Updated: 2023/10/16 15:07:45 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>           // printf
#include <unistd.h>          // write
#include <string.h>          // fonction string

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