int is_power_of_2(unsigned int n)
{
	unsigned int i;
	unsigned int pow;

	i = 1;
	pow = 0;
	while (pow < n)
	{
		i = i * 2;
		if (i == n)
			return 1;
		pow++;
	}
	return 0;
}

