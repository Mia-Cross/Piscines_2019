#include <unistd.h>

void repeat_alpha(char *str)
{
	int i;
	int count;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			count = 'A';
			while (count++ <= str[i])
				write(1, &str[i], 1);
			i++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			count = 'a';
			while (count++ <= str[i])
				write(1, &str[i], 1);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
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
	repeat_alpha(av[1]);
	write(1, "\n", 1);
	return 0;
}

