/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:20:54 by aamoussa          #+#    #+#             */
/*   Updated: 2022/05/30 20:38:06 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_free(char **b)
{
	free(*b);
	*b = NULL;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	size_t	i;
	size_t	k;
	char	*nstr;

	if (!s1 || !s2)
		return (0);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	i = 0;
	k = 0;
	nstr = (char *)malloc(s1len + s2len + 1);
	if (!nstr)
		return (NULL);
	while (s1[k])
		nstr[i++] = s1[k++];
	k = 0;
	while (s2[k])
		nstr[i++] = s2[k++];
	nstr[i] = '\0';
	return (nstr);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}

char	*ft_strdup(const char *src)
{
	int		i;
	int		size;
	char	*ptr;

	i = 0;
	size = ft_strlen(src);
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == 0)
		return (0);
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
