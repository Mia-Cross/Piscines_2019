#include <stdlib.h>

int is_sep(char c)
{
	if (c == ' ' || c == '\t')
		return 1;
	return 0;
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
		while (is_sep(str[i]) && str[i])
			i++;
		if (!(is_sep(str[i])) && str[i])
		{
			k = 0;
			if (!(tab[j] = (char *)malloc(4000)))
				return 0;
			while (!(is_sep(str[i])) && str[i])
				tab[j][k++] = str[i++];
			tab[j][k] = 0;
			j++;
		}
	}
	tab[j] = 0;
	return (tab);
}


