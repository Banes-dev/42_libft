/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:37:56 by ehay              #+#    #+#             */
/*   Updated: 2023/10/25 15:45:20 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst && f)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// // Fonction qui affiche un élément
// void print_element(void *content)
// {
//     printf("%d ", *(int *)content);
// }

// // Fonction pour créer un nouvel élément
// t_list *create_element(void *content)
// {
//     t_list *new_element = (t_list *)malloc(sizeof(t_list));
//     new_element->content = content;
//     new_element->next = NULL;
//     return new_element;
// }

// int main()
// {
//     // Création de la liste chaînée
//     t_list *first = create_element((void *)malloc(sizeof(int)));
//     t_list *second = create_element((void *)malloc(sizeof(int)));
//     t_list *third = create_element((void *)malloc(sizeof(int)));

//     // Assigner des valeurs aux éléments
//     *(int *)first->content = 1;
//     *(int *)second->content = 2;
//     *(int *)third->content = 3;

//     // Lier les éléments en une liste chaînée
//     first->next = second;
//     second->next = third;

//     // Appliquer la fonction print_element à chaque élément de la liste
//     ft_lstiter(first, &print_element);

//     // Libérer la mémoire allouée
//     while (first)
//     {
//         t_list *temp = first;
//         first = first->next;
//         free(temp->content);
//         free(temp);
//     }

//     return 0;
// }