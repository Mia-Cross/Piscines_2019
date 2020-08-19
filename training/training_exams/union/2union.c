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
		s1[i++] = s2[j++];
	return (s1);
}

void ft_union(char *str)
{
	int i;
	int j;

	write(1, &str[0], 1);
	i = 0;
	while (str[i])
	{
		j = i - 1;
		while (j > 0 && str[i] != str[j])
			j--;
		if (j == 0 && str[i] != str[j])
			write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	char *str;

	if (ac == 3)
	{
		str = ft_strcat(av[1], av[2]);
		ft_union(str);
	}
	write(1, "\n", 1);
	return 0;
}
