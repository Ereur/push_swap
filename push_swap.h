/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:43:17 by aamoussa          #+#    #+#             */
/*   Updated: 2021/12/19 15:53:43 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include "./libft/libft.h"

typedef struct s_stack
{
	int				stack_a_len;
	int				stack_b_len;
	struct s_stack	*next;
}	t_stack;

int			ft_check(int ac, char **argv);
t_list		*ft_getstack(int stack_len, char **stack_content);
void		ft_free(t_list **b);
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
#endif