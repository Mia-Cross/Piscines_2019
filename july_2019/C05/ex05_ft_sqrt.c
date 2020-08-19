/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarabes <lmarabes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 13:06:34 by lmarabes          #+#    #+#             */
/*   Updated: 2019/07/22 13:06:36 by lmarabes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;
	int	i;

	result = 0;
	i = 1;
	while (i < 46341)
	{
		result = nb / i;
		if (nb % i == 0)
		{
			if (result * result == nb)
				return (result);
		}
		i++;
	}
	return (0);
}
