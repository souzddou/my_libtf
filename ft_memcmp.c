/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:39:05 by souzddou          #+#    #+#             */
/*   Updated: 2023/11/18 19:39:32 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*ns;
	const unsigned char	*ms;
	size_t				i;

	i = 0;
	ns = (const unsigned char *)s1;
	ms = (const unsigned char *)s2;
	while (i < n)
	{
		if (ns[i] != ms[i])
			return (ns[i] - ms[i]);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	int l;
	char *s1 = "hello";
	char *s2 = "";
	l = ft_memcmp(s1, s2, 4);
	printf("%d", l);
	return (0);
}*/