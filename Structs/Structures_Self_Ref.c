/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Structures_Self_Ref.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 12:27:48 by lleiria-          #+#    #+#             */
/*   Updated: 2022/05/23 10:31:54 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct s_code
{
	int		i;
	char	c;
	struct s_code	*ptr;
}	t_code;

int	main()
{
	t_code	var1;
	t_code	var2;

	var1.i = 65;
	var1.c = 'A';
	var1.ptr = NULL;

	var2.i = 66;
	var2.c = 'B';
	var2.ptr = NULL;
	
	var1.ptr = &var2;
	
	printf("%d %c\n", var1.ptr->i, var1.ptr->c);
	printf("%d %c\n", var2.i, var2.c);
}
