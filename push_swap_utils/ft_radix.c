/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:20:55 by aamoussa          #+#    #+#             */
/*   Updated: 2022/02/14 13:32:41 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	push_all_stack_a(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstsize(*stack_b) != 0)
	{
		pa(stack_a, stack_b);
		write(1, "pa\n", 3);
	}
}

void	radix(t_list *stack_a, t_list *stack_b, int stack_size)
{
	int	i;
	int	bits;

	i = 0;
	bits = 0;
	while (!ft_issorted(stack_a) || stack_b)
	{
		i = 0;
		while (i++ < stack_size)
		{	
			if (((stack_a->content >> bits) & 1) == 1)
			{
				rotate(&stack_a);
				write(1, "ra\n", 3);
			}
			else
			{
				pb(&stack_b, &stack_a);
				write(1, "pb\n", 3);
			}
		}
		push_all_stack_a(&stack_a, &stack_b);
		bits++;
	}
}
