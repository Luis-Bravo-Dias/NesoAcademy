/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_last_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:59:40 by lleiria-          #+#    #+#             */
/*   Updated: 2022/05/30 12:13:46 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_node
{
	int	data;
	struct s_node *link;
}	t_node;

void	del_last(t_node *head)
{
	t_node	*tmp;

	if (head == NULL)
		printf("List is already empty!");
	else if (head->link == NULL)
	{
		free(head);
		head = NULL;
	}
	else
	{
		tmp = head;
		while (tmp->link->link != NULL)
			tmp = tmp->link;
		free(tmp->link);
		tmp->link = NULL;
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

	del_last(head);
	ptr = head;

	while (ptr != NULL)
	{
		printf("%d \n", ptr->data);
		ptr = ptr->link;
	}
	return (0);
}

//https://www.youtube.com/watch?v=8flOSiGsO-g&list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y&index=51