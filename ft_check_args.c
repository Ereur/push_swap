/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 13:39:49 by aamoussa          #+#    #+#             */
/*   Updated: 2021/12/19 16:00:43 by aamoussa         ###   ########.fr       */
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

int	ft_check_duplicat(int digit, t_list	**head)
{
	t_list	*tmp;

	tmp = *head;
	while (tmp)
	{
		if (digit == tmp->content)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

void	ft_receive_data(char **clean_args, t_list	**head)
{
	int		i;
	long	digit;
	t_list	*new_node;

	i = 0;
	while (clean_args[i])
	{
		if (ft_strlen(clean_args[i]) > 11)
			error_handler(2, head);
		digit = ft_atoi(clean_args[i]);
		if (digit > INT_MAX || digit < INT_MIN)
			error_handler(2, head);
		if (ft_check_duplicat(digit, head))
			error_handler(2, head);
		new_node = ft_lstnew(digit);
		if (!new_node)
			error_handler(2, head);
		ft_lstadd_back(head, new_node);
		i++;
	}
}

t_list	*ft_check_args(int ac, char **argv)
{
	int		i;
	char	**av;
	t_list	*head;
	int		j;

	head = NULL;
	i = 1;
	while (--ac)
	{
		if (ft_digits(argv[i]))
			error_handler(2, &head);
		av = ft_split(argv[i++], ' ');
		if (!av)
			error_handler(2, &head);
		ft_receive_data(av, &head);
		j = 0;
		while (av[j])
		{
			free(av[j++]);
		}
		free(av);
	}
	return (head);
}
