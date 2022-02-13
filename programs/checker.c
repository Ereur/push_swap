/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 10:58:18 by aamoussa          #+#    #+#             */
/*   Updated: 2022/02/13 16:57:20 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"
#include"../get_next_line/get_next_line.h"

void	ft_ope(t_list *stack_a, t_list *stack_b, int indix)
{
	if (indix == 0)
		swap(&stack_a);
	else if (indix == 3)
		swap(&stack_b);
	else if (indix == 6)
		ss(&stack_a, &stack_b);
	else if (indix == 9)
		pa(&stack_a, &stack_b);
	else if (indix == 12)
		pb(&stack_b, &stack_a);
	else if (indix == 15)
		rotate(&stack_a);
	else if (indix == 18)
		rotate(&stack_b);
	else if (indix == 21)
		rr(&stack_a, &stack_b);
	else if (indix == 24)
		rrotate(&stack_a);
	else if (indix == 28)
		rrotate(&stack_b);
	else if (indix == 32)
		rrr(&stack_a, &stack_b);
}

int	main(int ac, char **argv)
{
	t_list	*stack_a;
	char	*line;
	char	*str;
	int		indix;
	t_list	*stack_b;

	stack_b = NULL;
	str = "sa\nsb\nss\npa\npb\nra\nrb\nrr\nrra\nrrb\nrrr";
	if (ac >= 2)
	{
		stack_a = ft_check_args(ac, argv);
	}
	while (1)
	{
		line = get_next_line(0);
		if (!line)
			break ;
		if (ft_strnstr(str, line, ft_strlen(str), &indix))
		{
			ft_ope(stack_a, stack_b, indix);
			tmp1 = stack_a;
		}
		if (!ft_strnstr(str, line, ft_strlen(str), &indix))
		{
			write (1, "KO\n", 3);
			exit(1);
		}
	}
	if (ft_issorted(stack_a) && !stack_b)
	{
		write(1, "OK\n", 3);
	}
	else
		write(1, "KO\n", 3);
}
