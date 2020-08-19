/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarabe <leila.marabese@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:11:15 by lemarabe          #+#    #+#             */
/*   Updated: 2019/09/14 10:34:35 by lemarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "prototypes.h"

int		do_op(char *str, int x, int y)
{
	int	(*f)(int, int);
	int	result;

	if (str[0] == '+')
		f = &ft_add;
	else if (str[0] == '-')
		f = &ft_sub;
	else if (str[0] == '/')
		f = &ft_div;
	else if (str[0] == '*')
		f = &ft_mult;
	else if (str[0] == '%')
		f = &ft_mod;
	else
		return (0);
	result = (*f)(x, y);
	return (result);
}

void	ft_print_result(int result, int y, char *op)
{
	if (y == 0)
	{
		if (op[0] == '/')
		{
			write(1, "Stop : division by zero\n", 24);
			return ;
		}
		if (op[0] == '%')
		{
			write(1, "Stop : modulo by zero\n", 22);
			return ;
		}
	}
	ft_putnbr(result);
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	int	x;
	int	y;
	int	result;

	if (ac != 4)
		return (0);
	x = ft_atoi(av[1]);
	y = ft_atoi(av[3]);
	result = do_op(av[2], x, y);
	ft_print_result(result, y, av[2]);
	return (0);
}
