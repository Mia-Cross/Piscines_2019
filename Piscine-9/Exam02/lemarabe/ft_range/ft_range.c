#include <stdlib.h>

int *ft_range(int start, int end)
{
	int *tab;
	int range;
	int i;

	if (start < end)
		range = end - start + 1;
	else
		range = start - end + 1;
	tab = NULL;
	if (!(tab = (int *)malloc(sizeof(int) * range)))
		return 0;
	i = 0;
	if (start < end)
	{
		while (start <= end)
			tab[i++] = start++;
	}
	else
	{
		while (start >= end)
			tab[i++] = start--;
	}
	return (tab);
}
