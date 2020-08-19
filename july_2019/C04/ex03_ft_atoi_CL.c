#include <stdio.h>

int		ft_atoi(const char *str)
{
    int i;
    int n;
    int out;

    i = 0;
    n = 0;
    out = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    n = i;
    if (str[i] == '+'|| str[i] == '-')
        i++;
    while (str[i] <= '9' && str[i] >= '0')
    {
        out = out * 10 + str[i] - '0';
        i++;
    }
    if (str[n] == '-')
        out = -out;
    return (out);
}

int main (void)
{
    char *str = "-+-123";
    int out;

    out = ft_atoi(str);
    printf("%d\n", out);
    return (0);
}
