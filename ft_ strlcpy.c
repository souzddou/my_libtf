/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ strlcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:58:11 by souzddou          #+#    #+#             */
/*   Updated: 2023/11/19 12:59:30 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
	}
	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}
int main()
{
    const char *s = "smail ouzddou";
    char d[20];
    printf("%d", ft_strlcpy(d, s, 6));
	return(0);
}
