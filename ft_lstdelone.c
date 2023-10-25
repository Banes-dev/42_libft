/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:10:27 by ehay              #+#    #+#             */
/*   Updated: 2023/10/25 15:18:16 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
	{
		return ;
	}
	if (del)
	{
		del(lst->content);
	}
	free(lst);
}

// void my_del(void *data)
// {
// 	free(data);
// }

// int main()
// {
// 	// Création d'un élément de la liste
// 	t_list *element = (t_list *)malloc(sizeof(t_list));
// 	element->content = malloc(sizeof(int));
// 	*(int *)(element->content) = 42; // Remplir le contenu avec un exemple

// 	// Appel de ft_lstdelone pour supprimer l'élément
// 	ft_lstdelone(element, my_del);

// 	printf("L'élément a été supprimé avec succès.\n");

// 	return 0;
// }