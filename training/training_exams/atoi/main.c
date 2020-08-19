#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *str);

int main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_atoi(av[1]));
	printf("%d\n", atoi(av[1]));
	return 0;
}
