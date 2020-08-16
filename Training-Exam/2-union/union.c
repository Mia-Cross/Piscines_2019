#include <unistd.h>

char *ft_strcat(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

int	check(char c, char *str, int lim)
{
	int i;

	i = 0;
	while (str[i] && i < lim)
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

void	ft_union(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (check(str[i], str, i) == 0)
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	char *str;

	if (ac != 3)
	{
		write(1, "\n", 1);
		return 0;
	}
	str = ft_strcat(av[1], av[2]);
	ft_union(str);
	return 0;
}
