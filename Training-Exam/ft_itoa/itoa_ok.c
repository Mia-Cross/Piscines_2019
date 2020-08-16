#include <stdlib.h>

int nbr_len(int nbr)
{
	int i;
	long p;
	
	i = 0;
	if (nbr < 0)
	{
		p = -(long)nbr;
		i = 1;
	}
	else
		p = (long)nbr;
	while (p)
	{
		p = p / 10;
		i++;
	}
	return (i);
}

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

char *ft_itoa(int nbr)
{
	char *str;
	int i;
	long p;
	int n_len;

	i = 0;
	n_len = nbr_len(nbr);
	str = (char *)malloc(sizeof(char) * n_len + 1);
	if (nbr < 0)
	{
		str[n_len - 1] = '-';
		p = -(long)nbr;
	}
	else if (nbr == 0)
	{
		str[0] = '0';
		str[1] = 0;
		return (str);
	}
	else
		p = (long)nbr;
	while (p)
	{
		str[i] = p % 10 + '0';
		p = p / 10;
		i++;
	}
	str[n_len] = 0;
	return (ft_strrev(str));
}

