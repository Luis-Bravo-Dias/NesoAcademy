/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_last.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:41:48 by lleiria-          #+#    #+#             */
/*   Updated: 2022/05/30 11:05:24 by lleiria-         ###   ########.fr       */
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
	t_node	*tmp2;

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
		tmp2 = head;
		while (tmp->link != NULL)
		{
			tmp2 = tmp;
			tmp = tmp->link;
		}
		tmp2->link = NULL;
		free(tmp);
		tmp = NULL;
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

//https://www.youtube.com/watch?v=TpgxJupHATQ&list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y&index=50