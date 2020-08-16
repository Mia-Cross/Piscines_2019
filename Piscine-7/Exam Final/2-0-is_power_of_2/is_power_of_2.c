int is_power_of_2(unsigned int n)
{
	unsigned int i;
	unsigned int nb;

	if (n == 0)
		return (0);
	i = 0;
	nb = 1;
	while (i < n)
	{
		if (nb == n)
			return (1);
		nb = nb * 2;
		i++;
	}
	return (0);
}
