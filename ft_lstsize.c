/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:05:28 by souzddou          #+#    #+#             */
/*   Updated: 2023/11/12 17:13:58 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*move;

	move = lst;
	count = 0;
	while (move)
	{
		move = move->next;
		count++;
	}
	return (count);
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

	printf("Size of the Linked List: %d\n", ft_lstsize(list));

	free(node1);
	free(node2);
	free(node3);

	return (0);
}*/
