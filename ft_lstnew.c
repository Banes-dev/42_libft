/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:18:02 by ehay              #+#    #+#             */
/*   Updated: 2023/10/24 14:57:21 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->content = content;
	new->next = NULL;
	return (new);
}

// int main() {
//     int *data = (int *)malloc(sizeof(int));
//     *data = 42;

//     t_list *newNode = ft_lstnew(data);

//     if (newNode != NULL) {
//         printf("Nouveau nœud créé avec succès.\n");
//         printf("Contenu : %d\n", *((int *)(newNode->content)));
//     } else {
//         printf("Échec de la création du nouveau nœud.\n");
//     }

//     return 0;
// }