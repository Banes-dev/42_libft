/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:37:30 by ehay              #+#    #+#             */
/*   Updated: 2023/10/24 15:01:47 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
	{
		return ((void) NULL);
	}
	new->next = *lst;
	*lst = new;
}

// int main()
// {
//     t_list *myList = NULL; // Initialisation d'une liste vide

//     // Création de quelques éléments à ajouter à la liste
//     t_list *element1 = malloc(sizeof(t_list));
//     t_list *element2 = malloc(sizeof(t_list));
//     t_list *element3 = malloc(sizeof(t_list));

//     element1->content = "Premier élément";
//     element2->content = "Deuxième élément";
//     element3->content = "Troisième élément";

//     // Ajout des éléments à la liste
//     ft_lstadd_front(&myList, element3);
//     ft_lstadd_front(&myList, element2);
//     ft_lstadd_front(&myList, element1);

//     // Parcourir la liste et afficher le contenu de chaque élément
//     t_list *current = myList;
//     while (current)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }

//     // Libérer la mémoire allouée pour les éléments
//     free(element1);
//     free(element2);
//     free(element3);

//     return 0;
// }
