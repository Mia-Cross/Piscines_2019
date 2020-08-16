#include <stdio.h>
#include <stdlib.h>

int is_sep(char c)
{
	if (c == ' ' || c == '\t')
		return 1;
	return 0;
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

int word_len(char *str, int i)
{
	int w_len;

	w_len = 0;
	while (str[i] && !(is_sep(str[i])))
	{
		i++;
		w_len++;
	}
	return (w_len);
}

int word_count(char *str)
{
	int i;
	int count;

	i = 0;
	count = 1;
	while (i < ft_strlen(str) - 1)
	{
		if (!(is_sep(str[i])) && is_sep(str[i + 1]))
			count++;
		if (!(is_sep(str[i])) && str[i + 1] == '\0')
			count++;
	}
	return (count);
}

char **ft_split(char *str)
{
	char **tab;
	int i;
	int j;
	int k;

	tab = NULL;
	if (!(tab = (char **)malloc(sizeof(char *) * (word_count(str)) + 1)))
		return 0;
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] && is_sep(str[i]))
			i++;
		while (str[i] && !(is_sep(str[i])))
		{
			k = 0;
			if (!(tab[j] = (char *)malloc(sizeof(char) * word_len(str, i) + 1)))
				return 0;
			tab[j][k++] = str[i++];
		}
		tab[j][k] = '\0';
		j++;
	}
	tab[j] = 0;
	return 0;
}

int main(int ac, char **av)
{
	char **tab;
	int i;
	(void)ac;
	tab = ft_split(av[1]);
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return 0;
}
