/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:20:55 by aamoussa          #+#    #+#             */
/*   Updated: 2022/02/17 11:43:02 by aamoussa         ###   ########.fr       */
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

void	push_to_stack_a(t_list **stack_a, t_list **stack_b, int bits)
{
	int	i;
	int	stack_size;

	i = 0;
	if (!(*stack_b))
		return ;
	stack_size = ft_lstsize(*stack_b);
	if (ft_issorted(*stack_a) && ft_issortedtwo(*stack_b))
	{
		push_all_stack_a(stack_a, stack_b);
		return ;
	}
	while (i++ < stack_size)
	{	
		if ((((*stack_b)->content >> (bits + 1)) & 1) == 1)
		{
			pa(stack_a, stack_b);
			write(1, "pa\n", 3);
		}
		else
		{
			rotate(stack_b);
			write(1, "rb\n", 3);
		}
	}
}

void	ft_clean_stack_a(t_list **stack_a, t_list **stack_b, int *bits)
{
	if ((((*stack_a)->content >> *bits) & 1) == 1)
	{
		rotate(stack_a);
		write(1, "ra\n", 3);
	}
	else
	{
		pb(stack_b, stack_a);
		write(1, "pb\n", 3);
	}
}

void	radix(t_list *stack_a, t_list *stack_b, int stack_size)
{
	int	i;
	int	bits;

	i = 0;
	bits = 0;
	while (!ft_issorted(stack_a))
	{
		i = 0;
		stack_size = ft_lstsize(stack_a);
		while (i++ < stack_size)
		{	
			if (ft_issorted(stack_a) && ft_issortedtwo(stack_b))
			{
				push_all_stack_a(&stack_a, &stack_b);
				exit(1);
			}
			ft_clean_stack_a(&stack_a, &stack_b, &bits);
		}
		push_to_stack_a(&stack_a, &stack_b, bits);
		bits++;
	}
}
