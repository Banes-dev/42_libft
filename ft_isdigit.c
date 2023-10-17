/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:46:48 by ehay              #+#    #+#             */
/*   Updated: 2023/10/17 13:01:39 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(char text)
{
	return (text >= '0' && text <= '9');
}

// int main(void)
// {
// 	char textbon = '5';
// 	char notext = 'n';
//     printf("%d", ft_isdigit(textbon));
// 	printf("\n");
// 	printf("%d", ft_isdigit(notext));
// }