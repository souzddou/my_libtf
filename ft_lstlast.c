/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:57:07 by souzddou          #+#    #+#             */
/*   Updated: 2023/11/12 17:02:36 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*move;

	move = lst;
	while (move)
	{
		if (!move)
			return (move);
		move = move->next;
	}
}
/*int main()
{
	t_list *node1 = (t_list *)malloc(sizeof(t_list));
	node1->content = "Node 1";
	node1->next = NULL;

	t_list *node2 = (t_list *)malloc(sizeof(t_list));
	node2->content = "Node 2";
	node2->next = NULL;

	t_list *node3 = (t_list *)malloc(sizeof(t_list));
	node3->content = "Node 3";
	node3->next = NULL;

	t_list *list = NULL;

	list = node3;
	node3->next = node2;
	node2->next = node1;

	t_list *lastNode = ft_lstlast(list);
	if (lastNode != NULL)
		printf("Last Node Content: %s\n", lastNode->content);
	else
		printf("The linked list is empty.\n");

	free(node1);
	free(node2);
	free(node3);

	return (0);
}*/
