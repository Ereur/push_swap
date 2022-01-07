/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingalgorithms.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 16:35:12 by aamoussa          #+#    #+#             */
/*   Updated: 2021/12/24 13:30:25 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

// static int	*stack_to_arr(t_list *stack_a)
// {
// 	int	*arr;
// 	int	i;

// 	i = 0;
// 	arr = malloc(sizeof(int) * ft_lstsize(stack_a));
// 	while (stack_a)
// 	{
// 		arr[i++] = stack_a->content;
// 		stack_a = stack_a->next;
// 	}
// 	return (arr);
// }

// // void	selectionsort(t_list **stack_a, t_list **stack_b)
// // {
// // 		int *arr;
// // 		int	i,j,min,tmp;
// // 		int len_of_arr;

// // 		arr = stack_to_arr(*stack_a);
// // 		len_of_arr = ft_lstsize(*stack_a);
// // 		i = 0;
// // 		while (i < len_of_arr - 1)
// // 		{
// // 			j = i + 1;
// // 			min = i;
// // 			while (j < len_of_arr)
// // 			{
// // 				if (arr[j] < arr[min])
// // 					min = j;
// // 				j++;
// // 			}
// // 			tmp = arr[i];
// // 			arr[i] = arr[min];
// // 			arr[min] = tmp;
// // 			i++;
// // 		}
// // 		// i = 0;
// // 		// while(i < len_of_arr)
// // 		// 		printf("%d\n", arr[i++]);
// // }

// // void	bubblesort(t_list **stack_a, t_list **stack_b)
// // {
// // 	int *arr;
// // 	int i,j,min,tmp;
// // 	int len_of_arr;
	
// // 	arr = stack_to_arr(*stack_a);
// // 	len_of_arr = ft_lstsize(*stack_a);
	
// // }
// void ft_merge(int *arr, int *l, int *r, int len_of_arr)
// {
// 	int i = 0,j = 0,k = 0;
// 	int r_len, l_len;
// 	if (len_of_arr % 2 == 0)
// 	{
// 		r_len = len_of_arr/2;
// 		l_len = len_of_arr/2;
// 	}
// 	else
// 	{
// 		r_len = len_of_arr/2 + 1;
// 		l_len = len_of_arr/2;
// 	}
	
// 	while (len_of_arr && l_len && r_len)
// 	{
// 		if (l[i] < r[j])
// 		{	
// 			arr[k++] = l[i++];
// 			l_len--;
// 		}
// 		else
// 		{
// 			arr[k++] = r[j++];
// 			r_len--;
// 		}
// 	}
// 	while(l_len)
// 	{	
// 		arr[k++] = l[i++];
// 		l_len--;
// 	}
// 	while(r_len)
// 	{	
// 		arr[k++];
// 		r_len--;
// 	}
// }
// void		mergesorte(t_list **stack_a)
// {
// 	int *arr, *r, *l;
// 	int i,j,k,r_len,l_len;
// 	int len_of_arr;
	
// 	arr = stack_to_arr(*stack_a);
// 	len_of_arr = ft_lstsize(*stack_a);
// 	if (len_of_arr % 2 == 0)
// 	{
// 		r_len = len_of_arr/2;
// 		l_len = len_of_arr/2;
// 		l = malloc(sizeof(int)*l_len);
// 		r = malloc(sizeof(int)*r_len);
// 		ft_memcpy(l, arr, sizeof(int) * len_of_arr);
// 		ft_memcpy(r, arr, sizeof(int)*len_of_arr);
// 	}
// 	else
// 	{
// 		r_len = len_of_arr/2 + 1;
// 		l_len = len_of_arr/2;
// 		l = malloc(sizeof(int)*l_len);
// 		r = malloc(sizeof(int)*r_len);
// 		ft_memcpy(l, arr, sizeof(int)*len_of_arr);
// 		ft_memcpy(r, arr, len_of_arr);
// 	}
// 	ft_merge(arr, l, r, len_of_arr);
// }
