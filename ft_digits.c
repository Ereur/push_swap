/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 13:59:33 by aamoussa          #+#    #+#             */
/*   Updated: 2021/12/18 16:12:58 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int	ft_check_space(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] && str[i] != ' ')
			break ;
		i++;
	}
	if (!str[i])
		return (1);
	return (0);
}

int	ft_digits(char *str)
{
	int	strlen;
	int	i;

	i = 0;
	strlen = ft_strlen(str);
	if (ft_check_space(str))
		return (1);
	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (i < strlen)
	{
		while (str[i] && str[i] == ' ')
		{
			i++;
			if (str[i] && (str[i] == '-' || str[i] == '+')
				&& ft_isdigit(str[i + 1]))
				i++;
		}
		while (str[i] && !ft_isdigit(str[i++]))
			return (1);
	}
	return (0);
}
