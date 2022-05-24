/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Structures_Array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:11:36 by lleiria-          #+#    #+#             */
/*   Updated: 2022/05/17 16:38:14 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

void	print(t_point arr[])
{
	int	i;
	for (i = 0; i < 2; i++)
		printf("%d %d\n", arr[i].x, arr[i].y);
}

int	main()
{
	t_point	arr[2] = {{1, 2}, {3, 4}};

	print(arr);
	return 0;
}
