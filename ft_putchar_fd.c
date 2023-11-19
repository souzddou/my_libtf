/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:14:19 by souzddou          #+#    #+#             */
/*   Updated: 2023/11/18 19:41:34 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int	main(void)
{
	int	fd;
	int	fd2;

	fd = open("t.txt", O_CREAT | O_RDWR);
	fd2 = open("rrrrt.txt", O_CREAT | O_RDWR);
	printf("%d  %d", fd, fd2);
	ft_putchar_fd('a', fd);
	return (0);
}*/
