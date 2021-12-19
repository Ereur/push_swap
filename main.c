/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:31:00 by aamoussa          #+#    #+#             */
/*   Updated: 2021/12/19 15:55:15 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include<stdio.h>

int	main(int ac, char **argv)
{
	t_list	*stack_a;
	t_list *stack_b;

	stack_b = NULL;
	stack_a = NULL;
	t_list	*tmp_a;
	t_list	*tmp_b;
	if (ac >= 2)
	{
		stack_a = ft_check_args(ac, argv);
	}
	rrotate(&stack_a);
	system("leaks a.out");
	tmp_a = stack_a;
	tmp_b = stack_b;
	printf("----stack a\n");
	while(tmp_a )
	{
		printf("%d\n", tmp_a->content);
		tmp_a = tmp_a->next;
	}
	printf("----stack_b\n");
	while(tmp_b)
	{
		printf("%d\n", tmp_b->content);
		tmp_b = tmp_b->next;
	}
}
