#include <stdlib.h>

char    **ft_split(char *str)
{
	char **tab;
	int i;
	int j;
	int k;

	tab = (char**)malloc(sizeof(char*) * 4000);
	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		while((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i] != '\0')
			i++;
		if ((str[i] != '\0' && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')))
		{
			tab[j] = (char*)malloc(sizeof(char) * 4000);
			while ((str[i] != '\0' && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')))
			{
				tab[j][k] = str[i];
				i++;
				k++;
			}
			j++;
		}
		k = 0;
	}
	tab[k] = 0;
	return (tab);
}
