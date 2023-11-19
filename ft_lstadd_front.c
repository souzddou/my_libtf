/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:53:28 by souzddou          #+#    #+#             */
/*   Updated: 2023/11/12 16:56:21 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	display(t_list *newnode)
{
	while (newnode != NULL)
	{
		printf("%s ", newnode->content);
		newnode = newnode->next;
	}
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
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

	ft_lstadd_front(&list, node3);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node1);

	printf("Linked List after adding nodes to the front:\n");
	display(list);

	free(node1);
	free(node2);
	free(node3);

	return (0);
}*/
