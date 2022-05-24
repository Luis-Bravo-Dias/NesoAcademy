/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Single_Link_List.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:04:11 by lleiria-          #+#    #+#             */
/*   Updated: 2022/05/24 14:58:12 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_node
{
	int	data;
	struct s_node *link;
}	t_node;

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
	return (0);
}

//https://www.youtube.com/watch?v=nxtDe6Gq4t4&list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y&index=39
//https://www.youtube.com/watch?v=HrY_YmU1vdg&list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y&index=35