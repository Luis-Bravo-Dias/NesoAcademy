/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_pos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:16:55 by lleiria-          #+#    #+#             */
/*   Updated: 2022/05/30 15:28:01 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_node
{
	int				data;
	struct s_node	*link;
}	t_node;

void	del_pos(t_node **head, int position)
{
	t_node	*current;
	t_node	*previous;

	current = *head;
	previous = *head;
	if (*head == NULL)
		printf("List is already empty!\n");
	else if (position == 1)
	{
		*head = current->link;
		free(current);
		current = NULL;
	}
	else
	{
		while (position != 1)
		{
			previous = current;
			current = current->link;
			position--;
		}
		previous->link = current->link;
		free(current);
		current = NULL;
	}
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
	int		position;

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

	position = 2;
	del_pos(&head, position);
	ptr = head;

	while (ptr != NULL)
	{
		printf("%d \n", ptr->data);
		ptr = ptr->link;
	}
	return (0);
}

//https://www.youtube.com/watch?v=f1r_jxCyOl0&list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y&index=55