#include <unistd.h>
#include <stdio.h>

int check_back(char *str, int i)
{
	char c;

	c = str[i];
	while (--i >= 0)
	{
		if (str[i] == c)
			return 0;
	}
	return 1;
}

int check_fwd(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return 1;
		i++;
	}
	return 0;
}

void ft_inter(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s1[i])
	{
		if (check_fwd(s2, s1[i]))
		{
			if (check_back(s1, i))
				write(1, &s1[i], 1);
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		ft_inter(av[1], av[2]);
	write(1, "\n", 1);
	return 0;
}
