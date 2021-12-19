/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 13:39:49 by aamoussa          #+#    #+#             */
/*   Updated: 2021/12/19 10:51:14 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

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
	int		digit;

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
		ft_lstadd_back(head, ft_lstnew(digit));
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