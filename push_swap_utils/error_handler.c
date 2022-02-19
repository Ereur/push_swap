/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 09:15:09 by aamoussa          #+#    #+#             */
/*   Updated: 2022/02/19 08:39:17 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_handler(int fd, t_list	**head)
{
	t_list	*tmp;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	ft_putstr_fd("ERROR", fd);
	exit(1);
}

void	ft_free_clean_args(char **clean_args)
{
	int	j;

	j = 0;
	while (clean_args[j])
	{
		free(clean_args[j++]);
	}
	free(clean_args);
}

void	ft_check_int(long *digit, char **clean_args, t_list **head, int i)
{
	if (ft_strlen(clean_args[i]) > 11)
	{	
		ft_free_clean_args(clean_args);
		error_handler(2, head);
	}
	*digit = ft_atoi(clean_args[i]);
	if (*digit > INT_MAX || *digit < INT_MIN)
	{	
		ft_free_clean_args(clean_args);
		error_handler(2, head);
	}
	if (ft_check_duplicat(*digit, head))
	{
		ft_free_clean_args(clean_args);
		error_handler(2, head);
	}
}
