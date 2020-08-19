#include <stdlib.h>

int is_word(char c)
{
	if (c == ' ' || c == '\t')
		return 0;
	return 1;
}

int word_len(char *str, int i)
{
	int size;
	
	size = 0;
	while (str[i] && is_word(str[i]))
	{
		i++;
		size++;
	}
	return size;
}

int word_count(char *str)
{
	int i;
	int count;

	i = 1;
	count = 0;
	while (str[i])
	{
		if (is_word(str[i - 1]) && !(is_word(str[i])))
			count++;
		else if (str[i + 1] == 0 && is_word(str[i]))
			count++;
		i++;
	}
	return count;
}

char **ft_split(char *str)
{
	char **tab;
	int i;
	int j;
	int k;
	int w_count;

	i = 0;
	j = 0;
	w_count = word_count(str);
	if (!(tab = (char **)malloc(sizeof(char *) * (w_count + 1))))
		return 0;
	while (str[i])
	{
		while (!(is_word(str[i])) && str[i])
			i++;
		if (str[i] && is_word(str[i]))
		{
			if (!(tab[j] = (char *)malloc(sizeof(char) * word_len(str, i) + 1)))
				return 0;
			k = 0;
			while (str[i] && is_word(str[i]))
				tab[j][k++] = str[i++];
			tab[j][k] = 0;
			j++;
		}
	}
	tab[j] = 0;
	return (tab);
}

