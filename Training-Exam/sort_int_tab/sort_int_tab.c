void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	int x;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			x = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = x;
			i = 0;
		}
		else
			i++;
	}
}
