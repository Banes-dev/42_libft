/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:46:43 by ehay              #+#    #+#             */
/*   Updated: 2023/10/20 12:52:53 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <fcntl.h>
// int main()
// {
//     int fd = open("test.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);

//     if (fd == -1) {
//         perror("Erreur lors de l'ouverture du fichier");
//         return 1;
//     }

//     ft_putchar_fd('w', fd);

//     close(fd);
// }