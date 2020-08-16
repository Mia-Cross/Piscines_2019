#include <stdlib.h>
#include <stddef.h>

int 	*ft_rrange(int start, int end)
{
	int 	i;
	int	size;
	int	value;
	int	*tab;

	i = 0;
	if (end < start)
		size = (start - end + 1);
	if (start < end)
		size = (end - start + 1);
	value = end;
	tab = (int *)malloc(sizeof(int)*size);
	while (i < size)
	{
		if (end > start)
			tab[i] = value--;
		else
			tab[i] = value++;
		i++;
	}
	return (tab);
}
