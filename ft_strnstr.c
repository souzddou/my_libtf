#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t	j;
    char *s;

	s = (char*)big;
    i = 0;
	j = 0;
	if (little[j] == '\0')
		return (s);
	while (s[i] != '\0')
	{
		while (s[i + j] == little[j] && s[i + j] != '\0' && i + j < len)
			j++;
		if (little[j] == '\0')
			return (s + i);
		i++;
		j = 0;
	}
	return (0);
}
/*#include<stdio.h>
int main()
{
    printf("%s", ft_strnstr("smailouzddou", "ou", 10));
    return(0);
}*/