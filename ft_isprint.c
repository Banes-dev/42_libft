/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:15:02 by ehay              #+#    #+#             */
/*   Updated: 2023/10/23 15:40:33 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int main(void)
// {
// 	char textbon = '5';
// 	char notext = '\n';
//     printf("%d", ft_isprint(textbon));
// 	printf("\n");
// 	printf("%d", ft_isprint(notext));
// }