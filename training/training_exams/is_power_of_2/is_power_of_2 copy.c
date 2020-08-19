int	is_power_of_2(unsigned int n)
{
	unsigned int i;
	unsigned int nbr;

	i = 0;
	nbr = 1;
	while (i <= 32)
	{
		if (nbr == n)
			return 1;
		nbr = nbr * 2;
		i++;
	}
	return 0;
}
