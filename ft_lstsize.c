/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:05:48 by ehay              #+#    #+#             */
/*   Updated: 2023/10/24 15:24:59 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main()
// {
//     // Créez une liste chaînée simple pour tester ft_lstsize.
//     t_list *first = malloc(sizeof(t_list));
//     t_list *second = malloc(sizeof(t_list));
//     t_list *third = malloc(sizeof(t_list));

//     first->content = NULL;
//     first->next = second;
//     second->content = NULL;
//     second->next = third;
//     third->content = NULL;
//     third->next = NULL;

//     // Appelez ft_lstsize pour compter les éléments de la liste.
//     int size = ft_lstsize(first);

//     printf("La taille de la liste est : %d\n", size);

//     // Libérez la mémoire allouée pour la liste chaînée.
//     free(first);
//     free(second);
//     free(third);

//     return 0;
// }