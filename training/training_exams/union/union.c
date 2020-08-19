#include <unistd.h>

char *ft_cat(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
		s1[i++] = s2[j++];
	return (s1);
}

int check_back(char *str, int i)
{
	char c;

	c = str[i];
	while (--i > 0)
	{
		if (str[i] == c)
			return 0;
	}
	return 1;
}

void	ft_union(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (check_back(str, i))
			write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	char *str;

	if (ac != 3)
	{
		write(1, "\n", 1);
		return 0;
	}
	str = ft_cat(av[1], av[2]);
	ft_union(str);
	write(1, "\n", 1);
	return 0;
}
