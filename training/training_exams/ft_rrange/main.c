#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int x, int y);

int main(int ac, char **av)
{
	int *tab;
	(void)ac;
	int i;
	int range;
	int x = atoi(av[1]);
	int y = atoi(av[2]);

	tab = ft_rrange(x, y);
	if (y < x)
		range = x - y + 1;
	else
		range = y - x + 1;
	i = 0;
	while (i < range)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return (0);
}
