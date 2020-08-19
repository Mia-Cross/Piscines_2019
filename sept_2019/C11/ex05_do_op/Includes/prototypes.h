/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarabe <leila.marabese@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 10:33:22 by lemarabe          #+#    #+#             */
/*   Updated: 2019/09/13 12:29:05 by lemarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		ft_add(int x, int y);
int		ft_sub(int x, int y);
int		ft_mult(int x, int y);
int		ft_div(int x, int y);
int		ft_mod(int x, int y);
int		do_op(char *str, int x, int y);
void	ft_print_result(int result, int y, char *op);
int		main(int ac, char **av);

#endif
