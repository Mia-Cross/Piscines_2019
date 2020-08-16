#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size);

int main()
{
	unsigned int i;
	//int *tab;
	unsigned int size;

	int tab[] = {-1, 8, 9, -76, -9638, 75631, 69, 1, 2, 3, 6, 0, 1, -2147483648, -2147483647, 2147483647, 0, 4};
	size = 18;
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return 0;
}

