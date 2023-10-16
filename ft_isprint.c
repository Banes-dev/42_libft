/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:15:02 by ehay              #+#    #+#             */
/*   Updated: 2023/10/16 15:21:58 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>           // printf
#include <unistd.h>          // write
#include <string.h>          // fonction string

int	ft_isprint(int text)
{
	return (text >= 32 && text <= 126);
}

// int main(void)
// {
// 	char textbon = '5';
// 	char notext = '\n';
//     printf("%d", ft_isprint(textbon));
// 	printf("\n");
// 	printf("%d", ft_isprint(notext));
// }