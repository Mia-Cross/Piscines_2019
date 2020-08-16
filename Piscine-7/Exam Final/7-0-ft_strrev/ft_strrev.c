void ft_swap(char *a, char *b)
{
	char p;

	p = *b;
	*b = *a;
	*a = p;
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strrev(char *str)
{
	int i;
	int l;
	int m;

	i = 0;
	l = ft_strlen(str) - 1;
	m = ft_strlen(str) / 2;
	while (i <= m)
	{
		ft_swap(&str[i], &str[l - i]);
		i++;
	}
	return (str);
}
