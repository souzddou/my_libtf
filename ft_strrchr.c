/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:43:44 by souzddou          #+#    #+#             */
/*   Updated: 2023/11/18 21:20:24 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = ft_strlen(str);
	str = (char *)s;
	while (str[i] != c)
	{
		if (str[i] == '\0')
		{
			return (0);
		}
		i--;
	}
	return (str);
}
