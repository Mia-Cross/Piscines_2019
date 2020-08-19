int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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

	i = 0;
	while (i < ft_strlen(str) / 2)
	{
		ft_swap(&str[i], &str[ft_strlen(str) - 1 - i]);
		i++;
	}
	return (str);
}

