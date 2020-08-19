#include <stdio.h>

char **ft_split(char *str);

int main(int ac, char **av)
{
	(void)ac;
	int i;
	char **tab;

	i = 0;
	tab = ft_split(av[1]);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return 0;
}
