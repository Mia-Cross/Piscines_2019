#include <unistd.h>
#include <stdlib.h>

int is_word(char c)
{
	if (c == ' ' || c == '\t')
		return 0;
	return 1;
}

void rev_wstr(char *str)
{
	int i;
	int save;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		while (str[i] && i > -1 && is_word(str[i]))
			i--;
		i++;
		save = i;
		while (str[i] && is_word(str[i]))
			write(1, &str[i++], 1);
		if (save)
			write(1, " ", 1);
		i = save - 2;
	}
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	rev_wstr(av[1]);
	write(1, "\n", 1);
	return 0;
}
