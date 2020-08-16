#include <stdio.h>

int main()
{
  int *a = 10;
  int *b = 3;

  ft_ultimate_div_mod(&a, &b);
  printf("%d\n", a);
  printf("%d\n", b);
}
