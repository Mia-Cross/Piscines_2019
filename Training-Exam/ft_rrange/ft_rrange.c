#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *tab;
	int range;
	int i;

	tab = NULL;
	i = 0;
	if (start > end)
		range = start - end + 1;
	else
		range = end - start + 1;
	if (!(tab = (int *)malloc(sizeof(int) * range)))
		return (0);
	if (start > end)
	{
		while (end <= start)
			tab[i++] = end++;
	}
	else
	{
		while (end >= start)
			tab[i++] = end--;
	}
	return (tab);
}
