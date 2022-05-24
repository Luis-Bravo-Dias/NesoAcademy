/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_data.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:04:54 by lleiria-          #+#    #+#             */
/*   Updated: 2022/05/24 17:45:49 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_node
{
	int	data;
	struct s_node *link;
}	t_node;

void	print_data(t_node *head)
{
	if (head == NULL)
		printf("Linked list is empty\n");
	t_node *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->data);
		ptr = ptr->link;
	}
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
	
	print_data(head);
}

//https://www.youtube.com/watch?v=FIV-0A0mZd8&list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y&index=37