/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:29:29 by lleiria-          #+#    #+#             */
/*   Updated: 2022/05/30 17:40:14 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_node
{
	int				data;
	struct s_node	*link;
}	t_node;

t_node	*del_list(t_node *head)
{
	t_node	*tmp;

	tmp = head;

	while (tmp != NULL)
	{
		tmp = tmp->link;
		free(head);
		head = tmp;
	}
	return (head);
}

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

int	main()
{
	t_node	*head;
	t_node	*ptr;

	head = malloc(sizeof(t_node));
	head->data = 45;
	head->link = NULL;

	add_at_end(head, 98);
	add_at_end(head, 3);

	ptr = head;
	while (ptr != NULL)
	{
		printf("%d \n", ptr->data);
		ptr = ptr->link;
	}

	printf("-------------\n");

	head = del_list(head);
	ptr = head;

	while (ptr != NULL)
	{
		printf("%d \n", ptr->data);
		ptr = ptr->link;
	}
	if (head == NULL)
		printf("Linked List Deleted Succesfully\n");
	return (0);
}

//https://www.youtube.com/watch?v=ScKTk5GwmG4&list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y&index=55