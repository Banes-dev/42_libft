/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:20:56 by ehay              #+#    #+#             */
/*   Updated: 2023/10/17 15:24:15 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(char text)
{
	if (text >= 65 && text <= 90)
	{
		text = text + 32;
	}
	return (text);
}

// int main(void)
// {
// 	char textbon = 'A';
// 	char notext = 'z';
//     printf("%c", ft_tolower(textbon));
// 	printf("\n");
// 	printf("%c", ft_tolower(notext));
// }