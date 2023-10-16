/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:02:11 by ehay              #+#    #+#             */
/*   Updated: 2023/10/16 15:07:58 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>           // printf
#include <unistd.h>          // write
#include <string.h>          // fonction string

int	ft_isalpha(char text)
{
	return ((text >= 97 && text <= 122) || (text >= 65 && text <= 90));
}

// int main(void)
// {
// 	char textbon = 'Z';
// 	char notext = '5';
//     printf("%d", ft_isalpha(textbon));
// 	printf("\n");
// 	printf("%d", ft_isalpha(notext));
// }