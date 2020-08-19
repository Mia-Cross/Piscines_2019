/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_rush01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 22:35:02 by schene            #+#    #+#             */
/*   Updated: 2019/07/13 22:35:14 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		print_solution(int *tab);
void		ft_putchar(char c);

int			ft_base(int *tab, int *param)
{
	int i;
	int x;

	x = 0;
	i = 0;
	while (param[i] == 4 && x < 4)
	{
		tab[x] = i + 1;
		x++;
	}
	x = 0;
	while (param[i] == 1 && x < 4)
	{
		tab[x] = i + 1;
		x++;
	}
	return (0);
}

int			isposable(int *tab, int pos, int i)
{
	int x;
	int y;
	int p;

	x = pos % 4;
	y = pos / 4;
	p = 0;
	while (p < 4)
	{
		if (tab[p + y * 4] == i)
			return (0);
		p++;
	}
	p = 0;
	while (p < 4)
	{
		if (tab[x + p * 4] == i)
			return (0);
		p++;
	}
	return (1);
}

int			check_left(int *tab, int num, int pos)
{
	int check;
	int x;

	check = 0;
	x = pos;
	while (x < pos + 4)
	{
		if (check < tab[x])
		{
			check = tab[x];
			num--;
		}
		x++;
	}
	return (num);
}

int			check_right(int *tab, int num, int pos)
{
	int check;
	int x;

	check = 0;
	x = pos;
	while (x > pos - 4)
	{
		if (check < tab[x])
		{
			check = tab[x];
			num--;
		}
		x--;
	}
	return (num);
}

int			check_down(int *tab, int num, int pos)
{
	int check;
	int x;

	check = 0;
	x = pos;
	while (x >= pos - 12)
	{
		if (check < tab[x])
		{
			check = tab[x];
			num--;
		}
		x -= 4;
	}
	return (num);
}

int			check_up(int *tab, int num, int pos)
{
	int check;
	int x;

	check = 0;
	x = pos;
	while (x <= pos + 12)
	{
		if (check < tab[x])
		{
			check = tab[x];
			num--;
		}
		x += 4;
	}
	return (num);
}

int			check_valid(int *tab, int *cote)
{
	int x;

	x = -1;
	while (++x < 4)
		if (check_up(tab, cote[x], x))
			return (0);
	while (++x < 8)
		if (check_down(tab, cote[x], x + 8))
			return (0);
	while (++x < 12)
		if (check_left(tab, cote[x], (x - 8) * 4))
			return (0);
	if (check_right(tab, cote[12], 3))
		return (0);
	if (check_right(tab, cote[13], 7))
		return (0);
	if (check_right(tab, cote[14], 11))
		return (0);
	if (check_right(tab, cote[15], 15))
		return (0);
	return (1);
}

int			ft_fill(int *tab, int *cote, int pos)
{
	int i;

	if (pos == 16)
	{
		if (check_valid(tab, cote))
			return (1);
		return (0);
	}
	if (tab[pos])
	{
		if (ft_fill(tab, cote, pos + 1))
			return (1);
		return (0);
	}
	i = 0;
	while (++i <= 4)
		if (isposable(tab, pos, i))
		{
			tab[pos] = i;
			if (ft_fill(tab, cote, pos + 1))
				return (1);
			tab[pos] = 0;
		}
	return (0);
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		print_solution(int *tab)
{
	int x;
	int y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			ft_putchar(tab[x + y * 4] + '0');
			if (x != 3)
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

int			print_error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

int			fill_param(char *str, int *cote)
{
	int x;

	x = 0;
	while (str[x])
	{
		if (x % 2)
		{
			if (str[x] != ' ')
				return (0);
		}
		else
		{
			if (str[x] < '1' || str[x] > '4')
				return (0);
			cote[x / 2] = str[x] - '0';
		}
		x++;
	}
	if (x != 31)
		return (0);
	return (1);
}

void		tabzero(int *tab)
{
	tab[0] = 0;
	tab[1] = 0;
	tab[2] = 0;
	tab[3] = 0;
	tab[4] = 0;
	tab[5] = 0;
	tab[6] = 0;
	tab[7] = 0;
	tab[8] = 0;
	tab[9] = 0;
	tab[10] = 0;
	tab[11] = 0;
	tab[12] = 0;
	tab[13] = 0;
	tab[14] = 0;
	tab[15] = 0;
}

int			main(int ac, char **av)
{
	int tab[16];
	int cote[16];

	if (ac != 2)
		return (print_error());
	if (!(fill_param(av[1], cote)))
		return (print_error());
	tabzero(tab);
	if (ft_fill(tab, cote, 0))
	{
		print_solution(tab);
	}
	else
	{
		print_error();
	}
	return (0);
}
