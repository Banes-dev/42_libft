/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:44:28 by ehay              #+#    #+#             */
/*   Updated: 2023/10/23 15:50:44 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*renv;
	int		i;

	i = 0;
	if (s == NULL)
	{
		return (NULL);
	}
	renv = (char *)malloc(ft_strlen(s) + 1);
	if (renv == NULL)
	{
		free(renv);
		return (NULL);
	}
	while (s[i])
	{
		renv[i] = s[i];
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