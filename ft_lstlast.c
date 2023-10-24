/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:27:30 by ehay              #+#    #+#             */
/*   Updated: 2023/10/24 15:40:50 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL && lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// int main()
// {
//     // Création de quelques éléments de la liste
//     t_list node1, node2, node3;
//     node1.content = "Premier élément";
//     node1.next = &node2;
//     node2.content = "Deuxième élément";
//     node2.next = &node3;
//     node3.content = "Dernier élément";
//     node3.next = NULL;

//     // Appel de la fonction ft_lstlast pour trouver le dernier élément
//     t_list *lastNode = ft_lstlast(&node1);

//     // Affichage du contenu du dernier élément
//     if (lastNode != NULL)
//     {
//         printf("Le dernier élément contient : %s\n", 
// (char *)lastNode->content);
//     }
//     else
//     {
//         printf("La liste est vide.\n");
//     }

//     return 0;
// }