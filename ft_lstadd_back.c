/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:48:03 by ehay              #+#    #+#             */
/*   Updated: 2023/10/25 13:19:41 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst == NULL || lst == NULL)
	{
		return ;
	}
	if (*lst)
	{
		ft_lstlast(*lst)->next = new;
	}
	else
	{
		*lst = new;
	}
}

// int main()
// {
//     // Créer une liste vide
//     t_list *myList = NULL;

//     // Ajouter des éléments à la fin de la liste
//     for (int i = 1; i <= 5; i++)
//     {
//         t_list *newNode = malloc(sizeof(t_list));
//         newNode->content = malloc(sizeof(int));
//         *((int *)newNode->content) = i;
//         newNode->next = NULL;

//         ft_lstadd_back(&myList, newNode);
//     }

//     // Parcourir la liste pour afficher son contenu
//     t_list *current = myList;
//     while (current != NULL)
//     {
//         printf("%d\n", *((int *)current->content));
//         current = current->next;
//     }

//     // Libérer la mémoire allouée
//     while (myList != NULL)
//     {
//         t_list *temp = myList;
//         myList = myList->next;
//         free(temp->content);
//         free(temp);
//     }

//     return 0;
// }