/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:13:31 by souzddou          #+#    #+#             */
/*   Updated: 2023/11/12 16:45:03 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*move;

	move = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (move->next != NULL)
	{
		move = move->next;
	}
	move->next = new;
	new->next = NULL;
}
/*int main()
{
	t_list *list = NULL;

	t_list *node1 = malloc(sizeof(t_list));
	node1->content = "Node 1";
	node1->next = NULL;

	ft_lstadd_back(&list, node1);

	t_list *node2 = malloc(sizeof(t_list));
	node2->content = "Node 2";
	node2->next = NULL;

	ft_lstadd_back(&list, node2);

	t_list *current = list;
	while (current != NULL)
	{
		printf("%s\n", current->content);
		current = current->next;
	}

	return (0);
}*/