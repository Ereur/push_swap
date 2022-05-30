/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:56:40 by aamoussa          #+#    #+#             */
/*   Updated: 2022/05/30 22:46:25 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	rotate(t_list **stack)
{
	int		stack_len;
	t_list	*tmp;
	t_list	*last;

	stack_len = ft_lstsize(*stack);
	if (!stack_len)
		return ;
	tmp = (*stack);
	last = ft_lstlast(*stack);
	*stack = (*stack)->next;
	last->next = tmp;
	tmp->next = NULL;
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}

void	rrotate(t_list **stack)
{
	int		stack_len;
	t_list	*tmp;
	t_list	*head;
	t_list	*last;

	stack_len = ft_lstsize(*stack);
	if (!stack_len)
		return ;
	tmp = (*stack);
	head = tmp;
	while (tmp->next->next)
		tmp = tmp->next;
	last = ft_lstlast(*stack);
	tmp->next = NULL;
	*stack = last;
	(*stack)->next = head;
}

void	rrr(t_list	**stack_a, t_list **stack_b)
{
	rrotate(stack_a);
	rrotate(stack_b);
}
