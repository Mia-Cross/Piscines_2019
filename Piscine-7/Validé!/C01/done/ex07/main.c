#include <unistd.h>
#include <stdio.h>

void ft_putstr(int *tab, int size)
{
  int i;

  for (i = 0 ; i < size ; i++)
  {
    printf("%d\n", tab[i]);
  }
}

void ft_swap(int *a, int *b);
void ft_rev_int_tab(int *tab, int size);

int main()
{
  int tab[] = {1, 3, 4, 5, 46, 72, 5, 4975};
  ft_rev_int_tab(&tab, 8);
  ft_putstr(&tab, 8);
  return(0);
}
