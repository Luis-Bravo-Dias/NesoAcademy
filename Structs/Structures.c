/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Structures.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:27:13 by lleiria-          #+#    #+#             */
/*   Updated: 2022/05/17 14:43:29 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

t_point	edit(t_point p)
{
	(p.x)++;
	p.y = p.y + 5;
	return (p);
}

void	print(t_point p)
{
	printf("%d %d\n", p.x, p.y);
}

int main()
{
	t_point p1 = {23, 45};
	t_point	p2 = {56, 90};
	p1 = edit(p1);
	p2 = edit(p2);
	print(p1);
	print(p2);
	return (0);
}