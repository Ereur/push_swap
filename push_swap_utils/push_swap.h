/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:43:17 by aamoussa          #+#    #+#             */
/*   Updated: 2022/02/14 13:43:34 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include "./libft/libft.h"
# include "./get_next_line.h"

typedef struct s_stack
{
	int				stack_a_len;
	int				stack_b_len;
	struct s_stack	*next;
}	t_stack;

typedef struct s_datatoarr
{
	int					stack_size;
	int					i;
	int					*arr;	
	t_list				*tmp;
}	t_vars;

int			ft_check(int ac, char **argv);
t_list		*ft_getstack(int stack_len, char **stack_content);
t_list		*ft_check_args(int ac, char **argv);
int			ft_digits(char *str);
void		ft_receive_data(char **clean_args, t_list	**head);
int			ft_check_duplicat(int digit, t_list	**head);
void		error_handler(int fd, t_list	**head);
void		swap(t_list **stack);
void		pb(t_list **stack_b, t_list **stack_a);
void		ss(t_list **stack_a, t_list **stack_b);
void		pa(t_list **stack_a, t_list **stack_b);
void		rotate(t_list **stack);
void		rr(t_list **stack_a, t_list **stack_b);
void		rrotate(t_list **stack);
void		selectionsort(t_list **stack_a, t_list **stack_b);
int			positionfstack(t_list *stack, int nb);
int			ft_slnumber(t_list *stack, char spe);
void		ft_sort_nbr(t_list *stack, int stack_size);
void		ft_sort_five_nbr(t_list *stack, int stack_size, t_list *stack_b);
int			*ft_datatoarray(t_list *stack);
void		radix(t_list *stack_a, t_list *stack_b, int stack_size);
void		rrr(t_list	**stack_a, t_list **stack_b);
void		push_all_stack_a(t_list **stack_a, t_list **stack_b);
#endif