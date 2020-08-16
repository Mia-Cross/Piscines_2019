#include <stdlib.h>

int is_space(char c)
{
	if (c == '\t' || c == '\n' || c == ' ')
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
	tab = NULL;
	if (!(tab = (char **)malloc(30000)))
		return 0;
	while (str[i])
	{
		while (is_space(str[i] && str[i]))
			i++;
		if (!(is_space(str[i])))
		{
			if (!(tab[j] = (char *)malloc(3000)))
				return 0;
			k = 0;
			while (!(is_space(str[i])) && str[i])
				tab[j][k++] = str[i++];
			tab[j][k] = '\0';
			j++;
		}
		i++;
	}
	tab[j] = 0;
	return (tab);
}
