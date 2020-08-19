#include <unistd.h>

int 	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return 1;
	else
		return 0;
}

void	epur_str(char *str)
{
	int i;

	i = 0;
	if (is_space(str[i]) == 0)
		write(1, &str[i], 1);
	i++;
	while (str[i])
	{
		if (is_space(str[i]) == 0)
			write(1, &str[i], 1);
		if (is_space(str[i]) == 1 && is_space(str[i - 1]) == 0)
			write(1, &str[i], 1);
		i++;
	}
}

int 	main (int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	epur_str(av[1]);
	write(1, "\n", 1);
	return 0;
}
