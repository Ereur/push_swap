/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 11:36:38 by aamoussa          #+#    #+#             */
/*   Updated: 2021/12/16 12:02:12 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!new)
	{	
		*lst = NULL;
		return ;
	}
	tmp = *lst;
	if (!(*lst))
	{
		*lst = new;
		new->next = NULL;
	}
	else
	{	
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
}
