int max(int *tab, unsigned int len)
{
	int i;
	int max;
	
	if (tab == '\0')
		return 0;
	i = 0;
	max = tab[i];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return(max);
}
