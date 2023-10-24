/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:37:11 by ehay              #+#    #+#             */
/*   Updated: 2023/10/24 17:01:43 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			break ;
		i++;
	}
	if (s[i] == (char) c)
		return ((char *) s + i);
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