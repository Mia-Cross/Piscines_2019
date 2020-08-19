int ft_strlen(char *str)

{

	int i;



	i = 0;

	while(str[i])

		i++;

	return (i);

}



void ft_swap(char *a, char *b)

{

	char c;



	c = *a;

	*a = *b;

	*b = c;

}




char *ft_strrev(char *str)

{
	
	int i;

	int len;



	i = 0;

	len = ft_strlen(str);

	while(i < (len / 2))

	{

		ft_swap(&str[i], &str[len - 1 - i]);

		i++;

	}

	return (str);

}
