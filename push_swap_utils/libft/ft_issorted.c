/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 07:13:07 by aamoussa          #+#    #+#             */
/*   Updated: 2022/02/16 08:40:21 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_issorted(t_list *stack)
{
	if (stack)
	{
		while (stack->next)
		{
			if (stack->content > stack->next->content)
				return (0);
			stack = stack->next;
		}
		return (1);
	}
	return (0);
}

int	ft_issortedtwo(t_list *stack)
{
	if (stack)
	{	
		while (stack->next)
		{
			if (stack->content < stack->next->content)
				return (0);
			stack = stack->next;
		}
		return (1);
	}
	return (0);
}
