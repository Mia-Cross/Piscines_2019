#include <unistd.h>

void	ft_putnbr(int nb)
{
	char c;

	if (nb > 9)
		ft_putnbr(nb / 10);
	c = nb % 10 + 48;
	write(1, &c, 1);
}


void ft_print_combn(int n)
{
    int i;
    int comb;
    
    i = 0;
    comb = -1;
    while (i < n)
    {
        ft_putnbr(comb + 1);
        i++;
    }
}

int main()
{
    ft_print_combn(5);
    return 0;
}