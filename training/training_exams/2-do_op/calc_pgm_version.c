#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_calc(int nb1, char op, int nb2)
{
	if (op == '+')
		return (nb1 + nb2);
	if (op == '-')
		return (nb1 - nb2);
	if (op == '*')
		return (nb1 * nb2);
	if (op == '/')
		return (nb1 / nb2);
	if (op == '%')
		return (nb1 % nb2);
	else
		return 0;
}

int main(int ac, char **av)
{
	int nb1;
	int nb2;
	char op;
	
	if (ac != 4)
	{
		write(1, "\n", 1);
		return 0;
	}
	nb1 = atoi(av[1]);
	op = av[2][0];
	nb2 = atoi(av[3]);
	printf("%d\n", ft_calc(nb1, op, nb2));
	return 0;
}
