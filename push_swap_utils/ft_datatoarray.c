/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_datatoarray.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:17:43 by aamoussa          #+#    #+#             */
/*   Updated: 2022/02/14 11:46:07 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sortarray(int *arr, int len)
{
	int		i;
	int		j;
	int		min;
	int		tmp;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		min = i;
		while (j < len)
		{
			if (arr[j] < arr[min])
				min = j;
				j++;
		}
		tmp = arr[i];
		arr[i] = arr[min];
		arr[min] = tmp;
		i++;
	}
}

int	*ft_datatoarray(t_list *stack)
{
	t_vars	var;

	var.i = 0;
	var.tmp = stack;
	var.stack_size = ft_lstsize(stack);
	var.arr = (int *)malloc(sizeof(int) * var.stack_size);
	if (!var.arr)
		error_handler(2, &stack);
	while (stack)
	{
		var.arr[var.i++] = stack->content;
		stack = stack->next;
	}
	sortarray(var.arr, var.stack_size);
	while (var.tmp)
	{
		var.i = 0;
		while (var.tmp->content != var.arr[var.i])
			var.i++;
		if (var.tmp->content == var.arr[var.i])
			var.tmp->content = var.i;
		var.tmp = var.tmp->next;
	}
	return (var.arr);
}
