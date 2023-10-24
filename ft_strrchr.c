/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:19:18 by ehay              #+#    #+#             */
/*   Updated: 2023/10/24 17:05:36 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *) s + i);
		i--;
	}
	return (NULL);
}

// int main(void)
// {
// 	char textbon[] = "ABcdTGzwtzt";
// 	char notext = 'z';
// 	if (ft_strrchr(textbon, notext))
// 	{
// 		printf("%s", ft_strrchr(textbon, notext));
// 		printf("\n");
// 		printf("%s", strrchr(textbon, notext));
// 		printf("\n");
// 	}
// }