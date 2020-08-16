#include <unistd.h>

int wdmatch(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		while (s1[i] != s2[j] && s2[j])
			j++;
		if (s1[i] == s2[j])
			i++;
		else
			return 0;
	}
	return 1;
}

int main(int ac, char **av)
{
	int i;

	if (ac != 3)
	{
		write(1, "\n", 1);
		return 0;
	}
	if (wdmatch(av[1], av[2]))
	{
		i = 0;
		while (av[1][i])
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
