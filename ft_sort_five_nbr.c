/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five_nbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 09:36:09 by aamoussa          #+#    #+#             */
/*   Updated: 2022/02/12 14:41:36 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include<stdio.h>

void	ft_sort_five_nbr(t_list *stack, int stack_size, t_list *stack_b)
{
	int	a;

	a = 2;
	if (ft_issorted(stack))
		return ;
	while (a--)
	{
		while (positionfstack(stack, ft_slnumber(stack, 's')) != 1)
		{
			if (positionfstack(stack, ft_slnumber(stack, 's')) <= 3)
			{
				rotate(&stack);
				write(1, "ra\n", 3);
			}
			else
			{
				rrotate(&stack);
				write(1, "rra\n", 4);
			}
		}
		pb(&stack_b, &stack);
		write(1, "pb\n", 3);
	}
	ft_sort_nbr(stack, ft_lstsize(stack));
	pa(&stack, &stack_b);
	write(1, "pa\n", 3);
	pa(&stack, &stack_b);
	write(1, "pa\n", 3);
}
