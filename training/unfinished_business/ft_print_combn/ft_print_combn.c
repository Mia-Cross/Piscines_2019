void	ft_print_comb(char c)
{
	c = '0';
	while (c <= '9')
		c++;
}

void	ft_print_combn(int n)
{
	char c;
	int i;

	if (n == 0)
		return 0;
	c = '0';
	i = 0;
	while (i < n)
	{
		ft_print_comb(c);
		i++;
	}
}


