/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:37:11 by ehay              #+#    #+#             */
/*   Updated: 2023/10/23 15:49:33 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return ((char *)(s + i));
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