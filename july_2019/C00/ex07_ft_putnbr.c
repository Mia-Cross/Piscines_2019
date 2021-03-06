/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleanslate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarabes <lmarabes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 12:37:45 by lmarabes          #+#    #+#             */
/*   Updated: 2019/07/08 13:17:15 by lmarabes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char c;
	long p;

	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		write(1, "-", 1);
		p = -1 * nb;
	}
	if (nb >= 0)
		p = nb;
	if (p > 9)
		ft_putnbr(p / 10);
	c = p % 10 + 48;
	write(1, &c, 1);
}
