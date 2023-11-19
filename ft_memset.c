/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:48:31 by souzddou          #+#    #+#             */
/*   Updated: 2023/11/18 21:32:03 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	size_t		i;
	unsigned char	*d;

	d = s;
	i = 0;
	while (i < n)
	{
		d[i] = c;
		i++;
	}
	return (d);
}
