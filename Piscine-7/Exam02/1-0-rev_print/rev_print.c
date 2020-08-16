#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str, 1);
		i++;
	}
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int i;
	int size;
	char *rev;
	
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	size = ft_strlen(argv[1]);
	i = size;
	rev[i] = '\0';
	while (--i >= 0)
	{
		rev[i] = argv[1];
	}
	ft_putstr(rev);
	write(1, "\n", 1);
	return(0);
}
