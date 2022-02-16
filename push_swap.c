/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:31:00 by aamoussa          #+#    #+#             */
/*   Updated: 2022/02/16 09:46:10 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./push_swap_utils/push_swap.h"

int	main(int ac, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*tmp_a;
	t_list	*tmp_b;

	stack_b = NULL;
	stack_a = NULL;
	if (ac >= 2)
	{
		stack_a = ft_check_args(ac, argv);
		if (ft_lstsize(stack_a) <= 3)
		{	
			ft_sort_nbr(stack_a, ft_lstsize(stack_a));
		}
		if (ft_lstsize(stack_a) <= 5)
			ft_sort_five_nbr(stack_a, ft_lstsize(stack_a), stack_b);
		else
		{
			ft_datatoarray(stack_a);
			radix(stack_a, stack_b, ft_lstsize(stack_a));
		}
	}	
	return (0);
}
