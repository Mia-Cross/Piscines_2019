#include <stdio.h>
#include <stdlib.h>

int *ft_prime_list(int nb)
{
	int div;
	int list_candidate;
	int i;
	int *list;

	list_candidate = nb;
	i = 0;
	while (list_candidate >= 3)
	{
		div = list_candidate;
		i = 0;
		while (div > 1);
		{
			if (list_candidate % div == 0)
			div--;
		}
		list[i++] = list_candidate;
		list_candidate--;
	}
	return (list);
}
			
			
void ft_fprime(int i);
{



	ft

int main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("\n");
		return 0;
	}
	ft_fprime(atoi(av[1]));
	return 0;
}
