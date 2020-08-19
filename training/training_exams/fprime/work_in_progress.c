#include <stdio.h>
#include <stdlib.h>

int is_prime(int x)
{
	int div;

	div = 2;
	while (div < x / div)
	{
		if (x % div == 0)
			return 0;
		div++;
	}
	return 1;
}

int prev_prime(int x)
{
    while (!(is_prime(x--)))
        ;
    return (x);
}

int *fprime(int x)
{
	int *tab;
	int div;
	int i;

	if (!(tab = malloc(3000)))
		return 0;
	i = 0;
	div = x;
	while (div-- > 1 && x != 0)
	{
		if (is_prime(div))
		{
			if (div * prev_prime(div) >= x)
			{
				tab[i++] = div;
				x = x / div;
			}
		}
	}
	return (tab);
}

int main(int ac, char **av)
{
	int x;
	int *tab;
	int i;
	
	if (ac != 2)
	{
		printf("\n");
		return 0;
	}
	x = atoi(av[1]);
	if (!(x > 0))
		return 0;
	else if (x == 1)
	{
		printf("1\n");
		return 0;
	}
	else
		tab = fprime(x);
	i = 0;
	while (tab[i])
		i++;
	while (--i >= 0)
	{
		printf("%d", tab[i]);
		if (i > 0)
			printf("*");
	}
	printf("\n");
	return 0;
}

