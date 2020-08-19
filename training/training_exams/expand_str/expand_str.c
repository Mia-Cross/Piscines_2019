#include <unistd.h>

int is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	else
		return (0);
}

void expand_str(char *str)
{
	int i;
	int j;

	i = 0;
	while (is_space(str[i]) && str[i])
		i++;
	while (str[i])
	{
		while (str[i] && !(is_space(str[i])))
		{
			write(1, &str[i], 1);
			i++;
		}
		if (str[i] && is_space(str[i]))
		{
			j = i;
			while (str[++j])
			{
				if (!(is_space(str[j])))
				{
					write(1, "   ", 3);
					break ;
				}
			}
			while (is_space(str[i]) && str[i])
				i++;
		}
	}
}


int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	expand_str(av[1]);
	write(1, "\n", 1);
	return 0;
}
