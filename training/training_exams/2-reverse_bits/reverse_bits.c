unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	unsigned char rev_oct;

	i = 0;
	while (i < 8)
	{
		rev_oct&i = octet&(7 - i);
		i++;
	}
	return (rev_oct);
}
