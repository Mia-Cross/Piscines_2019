/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarabes <lmarabes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 00:26:42 by lmarabes          #+#    #+#             */
/*   Updated: 2019/07/22 21:14:57 by lmarabes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int			ft_strlen_ultimate(char **str)
{
	int		i;
	int		j;
	int		size;

	size = 0;
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			j++;
		}
		size += j;
		i++;
	}
	return (size);
}

int			ft_print_sep(char *sep, char *cat, int *k)
{
	int		s;

	s = 0;
	while (sep[s])
	{
		cat[*k] = sep[s];
		s++;
		*k = *k + 1;
	}
	return (*k);
}

char		*ft_print_cat(int size, char *cat, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			cat[k] = strs[i][j];
			j++;
			k++;
		}
		if (i < (size - 1))
			k = ft_print_sep(sep, cat, &k);
		i++;
	}
	cat[k] = '\0';
	return (cat);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	char	*cat;
	int		mal_size;

	cat = 0;
	if (size == 0)
	{
		cat = malloc(sizeof(char));
		cat[0] = '\0';
		return (cat);
	}
	mal_size = (ft_strlen(sep) * (size - 1)) + ft_strlen_ultimate(strs);
	cat = malloc(sizeof(*cat) * (mal_size + 1));
	if (!cat)
		return (0);
	ft_print_cat(size, cat, strs, sep);
	return (cat);
}
