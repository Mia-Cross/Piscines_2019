// pas fini ca m'a saoule

#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int sign;
	int res;

	i = 0;
	sign = 1;
	res = 0;
	if (str[i] == '-')
		sign = -1;
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	printf("%d\n", (res * sign));
	return (res * sign);
}

void	ft_putnbr(int nb)
{
	char c;
	long x;

	if (nb < 0)
	{
		x = -(long)nb;
		write(1, "-", 1);
	}
	else
		x = (long)nb;
	if (x > 9)
		ft_putnbr(x / 10);
	c = x % 10 + '0';
	write(1, &c, 1);
}

int add_prime_sum(int x, int i)
{
	while ((i < x / i) && (x % i == 0))
		i++;
	if (x % i == 0)
		return 0;
	else
	{
		printf("%d\n", i);
		return (i);
	}
}

int main(int ac, char **av)
{
	int x;
	int i;
	int total;

	x = ft_atoi(av[1]);
	if (ac != 2 || x < 0)
	{
		write(1, "0\n", 2);
		return 0;
	}
	i = 2;
	total = 0;
	while (i <= x)
	{
		printf("dans la boucle total = %d\n", total);
		total += add_prime_sum(x, i++);
	}
	printf("%d\n", total);
	ft_putnbr(total);
	return 0;
}
