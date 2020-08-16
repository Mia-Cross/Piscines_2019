#include <stdio.h>

void ft_swap(int *a, int *b)
{
  int x;

  x = *a;
  *a = *b;
  *b = x;
}

int main ()
{
  int a = 420;
  int b = -12;

  ft_swap(&a, &b);
  printf("%d\n", a);
  printf("%d\n", b);
}
