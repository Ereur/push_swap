/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingalgorithms.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 16:35:12 by aamoussa          #+#    #+#             */
/*   Updated: 2021/12/21 09:50:52 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int	*stack_to_arr(t_list *stack_a)
{
	int	*arr;
	int	i;

	i = 0;
	arr = malloc(sizeof(int) * ft_lstsize(stack_a));
	while (stack_a)
	{
		arr[i++] = stack_a->content;
		stack_a = stack_a->next;
	}
	return (arr);
}

void	selectionsort(t_list **stack_a, t_list **stack_b)
{
		int *arr;
		int	i,j,min,tmp;
		int len_of_arr;

		arr = stack_to_arr(*stack_a);
		len_of_arr = ft_lstsize(*stack_a);
		i = 0;
		while (i < len_of_arr - 1)
		{
			j = i + 1;
			min = i;
			while (j < len_of_arr)
			{
				if (arr[j] < arr[min])
					min = j;
				j++;
			}
			tmp = arr[i];
			arr[i] = arr[min];
			arr[min] = tmp;
			i++;
		}
		i = 0;
		while(i < len_of_arr)
				printf("%d\n", arr[i++]);
}

void	bubblesort(t_list **stack_a, t_list **stack_b)
{
	int *arr;
	int i,j,min,tmp;
	int len_of_arr;
	
	arr = stack_to_arr(*stack_a);
	len_of_arr = ft_lstsize(*stack_a);
	
}