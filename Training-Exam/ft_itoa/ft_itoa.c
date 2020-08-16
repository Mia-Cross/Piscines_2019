#include <stdlib.h>
#include <stdio.h>

char *ft_strrev(char *str)
{
	int i;
	int j;
	char c;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	i--;
	while (i > j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i--;
		j++;
	}
	return (str);
}

int nbr_len(int nbr)
{
	int i;

	i = 0;
	while (nbr)
	{
		nbr = nbr / 10;
		i++;
	}
	printf("n_len = %d\n", i);
	return (i);
}

char *ft_itoa(int nbr)
{
	long p;
	int n_len;
	char *str;
	int i;

	if (nbr < 0)
	{
		p = -(long)nbr;
		n_len = nbr_len(nbr) + 1;
	}
	else
	{
		p = (long)nbr;
		n_len = nbr_len(nbr);
	}
	if (!(str = (char *)malloc(sizeof(char) * n_len + 1)))
		return 0;
	i = 0;
	while (p)
	{
		str[i] = p % 10 + '0';
		p = p / 10;
		i++;
	}
	if (nbr < 0)
		str[n_len - 1] = '-';
	else if (nbr == 0)
	{
		n_len = 1;
		str[0] = '0';
	}
	str[n_len] = 0;
	return (ft_strrev(str));
}


