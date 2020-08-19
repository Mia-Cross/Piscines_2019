#include <unistd.h>

int check_back(char c, char *str)
{
	int i;

	i = 
}

int is_in_it(char c, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

void ft_hidenp(char *s1, char *s2)
{
	int i;
	int occ;
	
	i = 0;
	occ = 0;
	while (s1[i])
	{
		if (is_in_it(s1[i], s2))
			occ++;
		i++;
	}
	if (occ != i)
		return 0;




int main(int ac, char **av)
{
	int i;

	if (ac != 3)
	{
		write(1, "\n", 1);
		return 0;
	}
	ft_hidenp(av[1], av[2]);
	

