/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_beg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:33:35 by lleiria-          #+#    #+#             */
/*   Updated: 2022/05/28 17:22:49 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_node
{
	int	data;
	struct s_node *link;
}	t_node;

void	add_beg(t_node **head, int d)
{
	t_node	*ptr;

	ptr = malloc(sizeof(t_node));
	ptr->data = d;
	ptr->link = NULL;

	ptr->link = *head;
	*head = ptr;
}

int	main()
{
	t_node	*head;

	head = malloc(sizeof(t_node));
	head->data = 45;
	head->link = NULL;

	t_node *ptr;

	ptr = malloc(sizeof(t_node));
	ptr->data = 98;
	ptr->link = NULL;
	
	head->link = ptr;

	int	data;

	data = 3;

	add_beg(&head, data);
	ptr = head;
	while (ptr != NULL)
	{
		printf("%d \n", ptr->data);
		ptr = ptr->link;
	}
	return (0);
}

//https://www.youtube.com/watch?v=jgqg6Qw68_Q&list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y&index=45
//https://www.youtube.com/watch?v=YL8MnLAJOMg&list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y&index=43
//https://www.youtube.com/watch?v=90zyJ1eVeUw&list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y&index=44