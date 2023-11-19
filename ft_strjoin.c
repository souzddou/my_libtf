/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:25:57 by souzddou          #+#    #+#             */
/*   Updated: 2023/11/12 17:31:05 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	char	*nwstr;
	int		len;

	if (s1 && s2)
	{
		i = 0;
		j = ft_strlen(s1);
		k = ft_strlen(s2);
		nwstr = (char *)malloc(j + k);
		if (!nwstr)
			return (NULL);
		nwstr[0] = '\0';
		ft_strcat(nwstr, s1);
		ft_strcat(nwstr, s2);
		return (nwstr);
	}
}
/*int main()
{
	char const *s = "smail";
	char const *s1 = "ouzddou";
	printf("%s", ft_strjoin(s, s1));
	return(0);
}*/
