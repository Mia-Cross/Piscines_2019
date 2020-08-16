void ft_swap(int *a, int *b)
{
  int x;

  x = *a;
  *a = *b;
  *b = x;
}

void ft_sort_int_tab(int *tab, int size)
{
  int i;

  i = 0;
  while (i < size)
  {
    while (tab[i] > tab[i + 1])
    {
      ft_swap(&tab[i], &tab[i + 1]);
      ft_sort_int_tab(tab, size);
    }
    i++;
  }
}
