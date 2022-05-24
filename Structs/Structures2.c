/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Structures2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:49:48 by lleiria-          #+#    #+#             */
/*   Updated: 2022/05/17 15:50:03 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

t_point	*fun(int a, int b)
{
	t_point *ptr = (t_point *)malloc(sizeof(t_point));
	ptr->x = a;
	ptr->y = b + 5;
	return (ptr);
}

void	print(t_point *ptr)
{
	printf("%d %d\n", ptr->x, ptr->y);
}

int	main()
{
	t_point *ptr1;
	t_point *ptr2;
	
	ptr1 = fun(2, 3);
	ptr2 = fun(6, 9);
	print(ptr1);
	print(ptr2);
	free(ptr1);
	free(ptr2);
	return (0);
}
