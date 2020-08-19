int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

void ft_swap(char *a, char *b)
{
	char c;

	c = *a;
	*a = *b;
	*b = c;
}

char *ft_strrev(char *str)
{
	int i;
	int j;

	i = ft_strlen(str) - 1;
	j = 0;
	while (i > j)
	{
		ft_swap(&str[i], &str[j]);
		i--;
		j++;
	}
	return (str);
}
