/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:01:26 by ehay              #+#    #+#             */
/*   Updated: 2023/10/16 15:13:15 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>           // printf
#include <unistd.h>          // write
#include <string.h>          // fonction string

int	ft_isalnum(char text)
{
	return ((text >= 97 && text <= 122) || (text >= 65 && text <= 90)
		|| (text >= '0' && text <= '9'));
}

// int main(void)
// {
// 	char textbon = 'A';
// 	char notext = ';';
//     printf("%d", ft_isalnum(textbon));
// 	printf("\n");
// 	printf("%d", ft_isalnum(notext));
// }