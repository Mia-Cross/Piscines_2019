#include <stdio.h>
#include <stdlib.h>

int is_power_of_2(unsigned int n);

int main(int ac, char **av)
{
	(void)ac;
	unsigned int x;

	x = (unsigned int)atoi(av[1]);
	printf("%d\n", is_power_of_2(x));
	return 0;
}
