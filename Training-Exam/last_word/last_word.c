#include <unistd.h>

int is_space(char c)
{
	if (c == ' ' || c == '\t')
		return 1;
	return 0;
}

void last_word(char *str)
{
	int i;

	i = 0;
	if (str[0] == 0)
		return ;
	while (str[i + 1])
		i++;
	if (is_space(str[i]))
	{
		while (str[i] && is_space(str[i]))
			i--;
		while (str[i] && !(is_space(str[i])))
			i--;
		i++;
		while (str[i] && !(is_space(str[i])))
			write(1, &str[i++], 1);
	}
	else
	{
		while (str[i] && !(is_space(str[i])))
			i--;
		i++;
		while (str[i] && !(is_space(str[i])))
			write(1, &str[i++], 1);
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		last_word(av[1]);
	}
	write (1, "\n", 1);
	return 0;
}
