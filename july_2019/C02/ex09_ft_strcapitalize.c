/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarabes <lmarabes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 12:28:29 by lmarabes          #+#    #+#             */
/*   Updated: 2019/07/12 12:28:31 by lmarabes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_low(char c)
{
	return (c >= 'a' && c <= 'z');
}

int		is_up(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int		is_num(char c)
{
	return (c >= '0' && c <= '9');
}

int		is_alphanum(char c)
{
	return (is_low(c) || is_up(c) || is_num(c));
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_up(str[i]))
		{
			if (is_alphanum(str[i - 1]))
				str[i] += 32;
			i++;
		}
		else if (is_low(str[i]))
		{
			if (!(is_alphanum(str[i - 1])))
				str[i] -= 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}
