#include <stdio.h>
#include <stdlib.h>

int	ft_pgcd(int a, int b)
{
	int p;

	if (a >= b)
		p = b;
	if (b > a)
		p = a;
	while (p > 0)
	{
		if ((a % p == 0) && (b % p == 0))
			return (p);
		p--;
	}
	return 0;
}

int 	main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("\n");
		return 0;
	}
	printf("%d\n", ft_pgcd(atoi(av[1]), atoi(av[2])));
	return 0;
}
