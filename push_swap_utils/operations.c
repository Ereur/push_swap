/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 12:02:47 by aamoussa          #+#    #+#             */
/*   Updated: 2022/02/20 11:11:07 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack)
{
	int		stack_len;
	t_list	*head;
	t_list	*tmp;

	if (*stack && ft_lstsize(*stack) > 1)
	{
		stack_len = ft_lstsize(*stack);
		if (!stack_len)
			return ;
		head = *stack;
		*stack = (*stack)->next;
		tmp = (*stack)->next;
		(*stack)->next = head;
		head->next = tmp;
	}
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	int		stack_b_len;
	t_list	*new_node;

	stack_b_len = ft_lstsize(*stack_b);
	if (!stack_b_len)
		return ;
	new_node = *stack_b;
	*stack_b = (*stack_b)->next;
	new_node->next = *stack_a;
	*stack_a = new_node;
}

void	pb(t_list **stack_b, t_list **stack_a)
{
	int		stack_a_len;
	t_list	*new_node;

	stack_a_len = ft_lstsize(*stack_a);
	if (!stack_a_len)
		return ;
	new_node = *stack_a;
	*stack_a = (*stack_a)->next;
	new_node->next = *stack_b;
	*stack_b = new_node;
}
