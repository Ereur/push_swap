/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_nbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 07:37:08 by aamoussa          #+#    #+#             */
/*   Updated: 2022/02/12 14:41:47 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include<stdio.h>

int	ft_slnumber(t_list *stack, char spe)
{
	int	nb;

	nb = stack->content;
	while (stack)
	{
		if (spe == 's')
		{
			if (nb > stack->content)
				nb = stack->content;
		}
		else
		{
			if (nb < stack->content)
				nb = stack->content;
		}
		stack = stack->next;
	}
	return (nb);
}

int	positionfstack(t_list *stack, int nb)
{
	int	i;

	i = 1;
	while (stack->content != nb)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

void	ft_sort_nbr(t_list *stack, int stack_size)
{
	if (ft_issorted(stack))
		return ;
	if (stack_size <= 2 && !ft_issorted(stack))
	{
		swap(&stack);
		write (1, "sa\n", 3);
		return ;
	}
	if (positionfstack(stack, ft_slnumber(stack, 'L')) == 1)
	{	
		rotate(&stack);
		write(1, "ra\n", 3);
	}
	else if (positionfstack(stack, ft_slnumber(stack, 'L')) == 2)
	{	
		rrotate(&stack);
		write(1, "rra\n", 4);
	}
	if (stack->content > stack->next->content)
	{
		swap(&stack);
		write(1, "sa\n", 3);
	}
}
