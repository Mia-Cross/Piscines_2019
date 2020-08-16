#include <unistd.h>

int main (int argc, char **argv)
{
	int i;
	char *str;

	if (argc != 2)
	{
		write (1, "a\n", 2);
		return (0);
	}
	i = 0;
	str = argv[1];
	while (str[i])
	{
		if (str[i] == 'a')
		{
			write (1, "a\n", 2);
			return (0);
		}
		i++;
	}
	if (str[i] == '\0')
		write (1, "a\n", 2);
	return (0);	
}
