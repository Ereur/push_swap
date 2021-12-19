/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:31:00 by aamoussa          #+#    #+#             */
/*   Updated: 2021/12/19 10:59:06 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include<stdio.h>
// t_list	*ft_getstack(int ac, char **stack_content)
// {
// 	t_list	*head;
// 	int		i;
// 	int		index;
// 	char **av;

// 	i = 1;
// 	head = NULL;
// 	while (ac)
// 	{
// 		ft_lstadd_back(&head, ft_lstnew(ft_atoi(stack_content[i++])));
// 		if (!head)
// 			return (NULL);
// 		ac--;
// 	}
// 	return (head);
// }

// int	ft_check(int ac, char **argv)
// {	
// 	int	stack_len;
// 	int	arglen;

// 	while (ac)
// 	{
// 		arglen = ft_strlen(argv[])

// 	}
// 	return (1);
// }

int	main(int ac, char **argv)
{
	t_list	*stack_a;
	t_list	*tmp;
	if (ac >= 2)
	{
		stack_a = ft_check_args(ac, argv);
	}
	tmp = stack_a;
	while(tmp)
	{
		printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
	system("leaks a.out");
}
