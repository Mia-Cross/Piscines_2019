#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nbr);

int main(int ac, char **av)
{
	char *str;
	(void)ac;
	str = ft_itoa(atoi(av[1]));
	printf("%s\n", str);
	return 0;
}

