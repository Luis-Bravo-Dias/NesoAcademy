/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_of_nodes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:56:00 by lleiria-          #+#    #+#             */
/*   Updated: 2022/05/24 17:05:32 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_node
{
	int	data;
	struct s_node *link;
}	t_node;

void	count_of_nodes(t_node *head)
{
	int	count;

	count = 0;
	if (head == NULL)
		printf("Linked list is empty\n");
	t_node	*ptr;
	ptr = head;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->link;
	}
	printf("%d nodes\n", count);
}

int	main()
{
	t_node	*head;
	t_node	*current;

	head = malloc(sizeof(t_node));
	head->data = 45;
	head->link = NULL;

	current = malloc(sizeof(t_node));
	current->data = 98;
	current->link = NULL;
	head->link = current;

	current = malloc(sizeof(t_node));
	current->data = 3;
	current->link = NULL;

	head->link->link = current;
	
	count_of_nodes(head);
	return (0);
}

//https://www.youtube.com/watch?v=e0s-zmpedYo&list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y&index=36