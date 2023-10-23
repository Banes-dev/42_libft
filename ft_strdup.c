/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:44:28 by ehay              #+#    #+#             */
/*   Updated: 2023/10/23 11:46:57 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*renv;
	int		i;

	i = 0;
	if (src == NULL)
	{
		return (NULL);
	}
	renv = (char *)malloc(ft_strlen(src) + 1);
	if (renv == NULL)
	{
		free(renv);
		return (NULL);
	}
	while (src[i])
	{
		renv[i] = src[i];
		i++;
	}
	renv[i] = '\0';
	return (renv);
}

// int main(void)
// {
//     printf("%s", ft_strdup("test"));
//     printf("\n");
//     printf("%s", strdup("test"));
//     printf("\n");
//     return (0);
// }