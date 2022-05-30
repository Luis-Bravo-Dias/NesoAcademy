/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_first.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:56:13 by lleiria-          #+#    #+#             */
/*   Updated: 2022/05/30 10:41:11 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_node
{
	int	data;
	struct s_node *link;
}	t_node;

t_node	*del_first(t_node *head)
{
	t_node	*tmp;

	if (head == NULL)
		printf("List is already empty!");
	else
	{
		tmp = head;
		head = head->link;
		free(tmp);
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

	head = del_first(head);
	ptr = head;

	while (ptr != NULL)
	{
		printf("%d \n", ptr->data);
		ptr = ptr->link;
	}
	return (0);
}

//https://www.youtube.com/watch?v=-rcIWx-JTxw&list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y&index=49