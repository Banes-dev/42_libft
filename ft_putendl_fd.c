/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:30:30 by ehay              #+#    #+#             */
/*   Updated: 2023/10/20 14:12:28 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	write(fd, s, i);
	write(fd, "\n", 1);
}

// #include <fcntl.h>
// int main()
// {
//     int fd = open("test.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);

//     if (fd == -1) {
//         perror("Erreur lors de l'ouverture du fichier");
//         return 1;
//     }

// 	char *aenvoie = "lalala";

//     ft_putendl_fd(aenvoie, fd);

//     close(fd);
// }