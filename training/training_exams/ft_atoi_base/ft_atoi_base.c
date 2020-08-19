int ft_atoi_base(const char *str, int str_base)
{
	char *base = "0123456789abcdef";
	int i;
	int sign;

	i = 0;
	if (str[0] == '-')
		sign = -1;
	else
		sign = 1;
	while (str[i])
	{


