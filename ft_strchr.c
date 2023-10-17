/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:37:11 by ehay              #+#    #+#             */
/*   Updated: 2023/10/17 16:18:11 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *text, char lettre)
{
	int	i;

	i = 0;
	if (!text)
	{
		return (NULL);
	}
	while (text[i] != '\0')
	{
		if (text[i] == lettre)
		{
			return ((char *)(text + i));
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char textbon[] = "ABcdTGzw";
// 	char notext = 'z';
// 	if (ft_strchr(textbon, notext))
// 	{
// 		printf("%s", ft_strchr(textbon, notext));
// 		printf("\n");
// 		printf("%s", strchr(textbon, notext));
// 		printf("\n");
// 	}
// }