/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:12:19 by ehay              #+#    #+#             */
/*   Updated: 2023/10/17 15:20:02 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(char text)
{
	if (text >= 97 && text <= 122)
	{
		text = text - 32;
	}
	return (text);
}

// int main(void)
// {
// 	char textbon = 'a';
// 	char notext = 'A';
//     printf("%c", ft_toupper(textbon));
// 	printf("\n");
// 	printf("%c", ft_toupper(notext));
// }