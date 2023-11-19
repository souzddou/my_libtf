/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:02:59 by souzddou          #+#    #+#             */
/*   Updated: 2023/11/12 17:05:10 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct t_list	*new;

	new = (struct t_list *)malloc(sizeof(struct t_list));
	new->content = content;
	new->next = NULL;
	return (new);
}
/*int main()
{
	t_list *node = ft_lstnew("Hello, world");
	printf("%s", node->content);
	return(0);
}*/
