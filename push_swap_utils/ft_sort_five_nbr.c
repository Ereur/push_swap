/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five_nbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 09:36:09 by aamoussa          #+#    #+#             */
/*   Updated: 2022/02/17 11:25:21 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_sort_five_nbr(t_list *stack, t_list *stack_b)
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
	push_all_stack_a(&stack, &stack_b);
}
