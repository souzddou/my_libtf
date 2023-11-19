/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:22:43 by souzddou          #+#    #+#             */
/*   Updated: 2023/11/12 17:25:41 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	f(unsigned int i, char *s)
{
	while (s[i] != '\0')
	{
		s[i] = 'h';
		i++;
	}
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s && !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
	s[i] = '\0';
}
/*int main()
{
	char s[20] = "Hello, World!";
	ft_striteri(s, &f);
	printf("%s\n", s);
	return (0);
}*/
