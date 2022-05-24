/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Single_Link_List_Node.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:44:37 by lleiria-          #+#    #+#             */
/*   Updated: 2022/05/23 12:30:42 by lleiria-         ###   ########.fr       */
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

	head = malloc(sizeof(t_node));

	head->data = 45;
	head->link = NULL;

	printf("%d\n", head->data);
	return (0);
}

//https://www.youtube.com/watch?v=DneLxrPmmsw&list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y&index=33