#include <unistd.h>

int check(char *s1, char *s2, int i)
{
	char c;
	int j;
	int x;

	c = s1[i];
	j = 0;
	x = 0;
	while (s2[j])
	{
		if (s2[j] == c)
			x += 1;
		j++;
	}
	while (--i > 0)
	{
		if (s1[i] == c)
			return 0;
	}
	return (x);
}

void	ft_inter(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (check(s1, s2, i))
			write(1, &s1[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "\n", 1);
		return 0;
	}
	ft_inter(av[1], av[2]);
	write(1, "\n", 1);
	return 0;
}
