#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main ()
{
	char c;
	int count;

	c = 'z';
	count = 0;
	while (++count <= 26)
	{
		if (count % 2 == 1)
			ft_putchar(c);
		else if (count % 2 == 0)
			ft_putchar(c - 32);
		c--;
	}
	ft_putchar('\n');
	return 0;
}
