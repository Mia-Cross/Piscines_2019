#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int is_sep(char c)
{
	if (c == ' ' || c == '\t')
		return 1;
	return 0;
}

int word_len(char *str, int i)
{
	int j;

	j = 0;
	while (!(is_sep(str[i++])))
		j++;
	return (j);
}

void rostring(char *str)
{
	int i;
	int j;
	char *stock;

	i = 0;
	while (str[i] && is_sep(str[i]))
		i++;
	if (str[i] && !(is_sep(str[i])))
	{
		if (!(stock = (char *)malloc(sizeof(char) * word_len(str, i) + 1)))
			return ;
		j = 0;
		while (str[i] && !(is_sep(str[i])))
			stock[j++] = str[i++];
		stock[j] = 0;
		while (str[i] && is_sep(str[i]))
			i++;
		if (str[i] && !(is_sep(str[i])))
		{
			while (str[i])
			{
				while (str[i] && !(is_sep(str[i])))
					write(1, &str[i++], 1);
				if (str[i] && is_sep(str[i]))
				{
					write(1, " ", 1);
					while (str[i] && is_sep(str[i]))
						i++;
				}
			}
		}
		if ((str[i] == 0) && !(is_sep(str[i - 1])))
			write(1, " ", 1);
		j = 0;
		while (stock[j])
			write(1, &stock[j++], 1);
		free(stock);
	}
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	rostring(av[1]);
	write(1, "\n", 1);
	return (0);
}
