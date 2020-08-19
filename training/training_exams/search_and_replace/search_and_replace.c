#include <unistd.h>

void	search_and_replace(char *str, char s, char r)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (s == str[i])
			write(1, &r, 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac != 4 || av[2][1] || av[3][1])
	{
		write(1, "\n", 1);
		return 0;
	}
	search_and_replace(av[1], av[2][0], av[3][0]);
	write(1, "\n", 1);
	return 0;
}
