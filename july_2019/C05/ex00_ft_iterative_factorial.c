/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarabes <lmarabes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 19:18:42 by lmarabes          #+#    #+#             */
/*   Updated: 2019/07/16 19:19:47 by lmarabes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		i;
	int		result;

	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	i = 1;
	result = nb;
	while ((nb - i) >= 1)
	{
		result = result * (nb - i);
		i++;
	}
	return (result);
}
