#include <stdlib.h>
#include <stdio.h>

int is_word(char c)
{
	if (c == ' ' || c == '\t')
		return 0;
	return 1;
}

char **ft_split(char *str)
{
	char **tab;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	if (!(tab = (char **)malloc(4000)))
		return 0;
	while (str[i])
	{
		printf("i = %d\n", i);
		while (str[i] && !(is_word(str[i])))
			i++;
		if (str[i] && is_word(str[i]))
		{
			if (!(tab[j] = (char *)malloc(4000)))
				return 0;
			k = 0;
			while (str[i] && is_word(str[i]))
				tab[j][k++] = str[i++];
			tab[j][k] = 0;
			j++;
		}
	}
	tab[j] = 0;
	return tab;
}

