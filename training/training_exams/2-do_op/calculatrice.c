#include "LIB_H"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_calc(int nb1, char op, int nb2)
{
	nb1 = NB1;	# peutetre
	op = OP;	# peutetre
	nb2 = NB2;	# peutetre
	return (NB1 OP NB2);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		write(1, "\n", 1);
		return 0;
	}
	printf("%d\n", ft_calc(NB1, OP, NB2));
	return 0;
}
