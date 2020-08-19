#include <stdio.h>
#include <stdlib.h>

int nbr_len(int nbr)
{
	int count;
	unsigned int u;

	count = 0;
	if (nbr < 0)
	{
		count = 1;
		u = -(unsigned int)nbr;
	}
	else
		u = (unsigned int)nbr;
	while (u)
	{
		u = u / 10;
		count++;
	}
	printf("count = %d\n", count);
	return count;
}

char *ft_strrev(char *str)
{
	int i;
	int j;
	char c;

	i = 0;
	while (str[i])
		i++;
	j = 0;
	printf("i avant ft_strrev = %d\n", i);
	i--;
	while (i > j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		j++;
		i--;
	}
	return (str);
}

char *ft_itoa(int nbr)
{
	char *str;
	int i;
	int n_len;
	long p;
	
	n_len = nbr_len(nbr);
	printf("n_len = %d\n", n_len);
	if (!(str = (char *)malloc(sizeof(char) * (n_len) + 1)))
		return 0;
	i = 0;
	if (nbr == 0)
	{
		str[0] = '0';
		str[1] = 0;
		return str;
	}
	else if (nbr < 0)
	{
		str[n_len - 1] = '-';
		p = -(long)nbr;
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
	printf("str = %s\n", str);
	return (ft_strrev(str));
}


