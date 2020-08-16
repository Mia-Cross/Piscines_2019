#include <stdio.h>
#include <stdlib.h>

void fprime(int x)
{
	int i;
	int nb;

	i = 2;
	nb = x;
	while (x)
	{
		if (nb % i == 0)
			i++;
		else
		{
			printf("%d", i);
			printf("*");
			x = x / i;
		}
	}
}

int main(int ac, char **av)
{
	int x;

	if (ac != 2)
	{
		printf("\n");
		return 0;
	}
	x = atoi(av[1]);
	if (x > 1)
		fprime(x);
	else if (x == 1)
		printf("1");
	printf("\n");
	return 0;
}

