#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_combn (int n)
{
	int i;
  char a;
  char b;

  i = 0;
  a = '0';
  while (i < n)
  {
    ft_putchar(a);
    b = '0';
    while (a < b && a < 'z')
    {
      ft_putchar(b);
      b++;
    }
    a++;
  }
  i++;
}
