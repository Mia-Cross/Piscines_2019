#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_repeat_alpha(char *str)
{
	int i;
	char count_upr;
	char count_lwr;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				count_lwr = 'a';
				while (count_lwr <= str[i])
				{
					ft_putchar(str[i]);
					count_lwr++;
				}
			}
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				count_upr = 'A';
				while (count_upr <= str[i])
				{
					ft_putchar(str[i]);
					count_upr++;
				}
			}
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return 0;
	}
	ft_repeat_alpha(av[1]);
	ft_putchar('\n');
	return 0;
}	
