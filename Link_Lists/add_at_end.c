/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_at_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:03:04 by lleiria-          #+#    #+#             */
/*   Updated: 2022/05/26 12:21:47 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_node
{
	int	data;
	struct s_node *link;
}	t_node;

void	add_at_end(t_node *head, int data)
{
	t_node	*ptr;
	t_node	*tmp;
	
	ptr = head;
	tmp = malloc(sizeof(t_node));

	tmp->data = data;
	tmp->link = NULL;

	while (ptr->link != NULL)
		ptr = ptr->link;
	ptr->link = tmp;
}

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

	count_of_nodes(head);
	print_data(head);
	printf("------------------\n");
	add_at_end(head, 67);
	count_of_nodes(head);
	print_data(head);
	return (0);
}

//https://www.youtube.com/watch?v=LYGbeWnYXd8&list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y&index=39