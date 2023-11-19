/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:57:15 by souzddou          #+#    #+#             */
/*   Updated: 2023/11/18 12:59:19 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	i;

	if (nmemb > __SIZE_MAX__ / size)
		return (NULL);
	str = malloc(nmemb * size);
	if (!str)
		return (NULL);
	bzero(str, nmemb * size);
	return (str);
}
/*int main()
{
	int *s;
	int *p;
	int t[3] = {3,3,3};
	int i;
	s = ft_calloc(3, 4);
	p = calloc(3, 4);
	p[0] = 2;
	p[1]=2;
	p[2]=2;
	if (!s)
		return (0);
	i = 0;
	// while (i < 20)
	// {
			printf("%p ",s + 8);
	// }
	printf("\n");
	// i = 0;
	// while (i < 20)
	// {
			printf("%p ",p);
	// }
	printf("\n");
	i = 0;
	while (i < 20)
	{
			printf("%d ",t[i++]);
	}
}*/
