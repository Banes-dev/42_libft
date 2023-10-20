/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:40:15 by ehay              #+#    #+#             */
/*   Updated: 2023/10/20 14:11:20 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		nb;
	char	result;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb <= 9)
	{
		result = nb + '0';
		write(fd, &result, 1);
	}
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}

// #include <fcntl.h>
// int main()
// {
//     int fd = open("test.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);

//     if (fd == -1) {
//         perror("Erreur lors de l'ouverture du fichier");
//         return 1;
//     }

// 	int aenvoie = 42224;

//     ft_putnbr_fd(aenvoie, fd);

//     close(fd);
// }