/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:35:17 by souzddou          #+#    #+#             */
/*   Updated: 2023/11/18 21:20:06 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	k = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = strlen(s1) - 1;
		while (s1[i] && strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && strchr(set, s1[j]))
			j--;
		str = (char *)malloc((j - i + 1));
		if (!str)
			return (NULL);
		ft_strncpy(str, s1 + i, j - i + 1);
	}
	return (str);
}
/*int	main(void)
{
	char const	*s1;
	char const	*set;

	s1 = "       smail ouzdouslp";
	set = "p";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}*/
