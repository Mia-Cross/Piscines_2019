/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operators.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarabe <leila.marabese@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 11:30:30 by lemarabe          #+#    #+#             */
/*   Updated: 2019/09/14 10:26:44 by lemarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_add(int x, int y)
{
	return (x + y);
}

int	ft_sub(int x, int y)
{
	return (x - y);
}

int	ft_mult(int x, int y)
{
	return (x * y);
}

int	ft_div(int x, int y)
{
	if (y == 0)
		return (0);
	return (x / y);
}

int	ft_mod(int x, int y)
{
	if (y == 0)
		return (0);
	return (x % y);
}
