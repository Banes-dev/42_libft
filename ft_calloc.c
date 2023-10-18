/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:32:13 by ehay              #+#    #+#             */
/*   Updated: 2023/10/18 15:13:55 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(int nb_elements, int taille_elements)
{
	void	*ptr;

	ptr = (void *)malloc(nb_elements * taille_elements);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, nb_elements);
	return (ptr);
}
