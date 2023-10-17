/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:01:26 by ehay              #+#    #+#             */
/*   Updated: 2023/10/17 13:01:46 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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