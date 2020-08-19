#include <unistd.h>

int is_sep(char c)
{
	if (c == ' ' || c == '\t')
		return 1;
	return 0;
}

void first_word(char *str)
{
	int i;

	i = 0;
	while (str[i] && is_sep(str[i]))
		i++;
	while (str[i] && !(is_sep(str[i])))
		write(1, &str[i++], 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
		first_word(av[1]);
	write(1, "\n", 1);
	return 0;
}
