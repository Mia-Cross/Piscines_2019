#include <stdio.h>

int     ft_mal_size(char *str);
int     ft_is_sep(char *str, int i, char *charset);

int     ft_is_sep(char *str, int i, char *charset)
{
    int j;
    
    i = 0;
    while (str[i])
    {
        j = 0;
        while (str[i] != charset[j] && charset[j] != '\0')
            j++;
        if (str[i] == charset[j])
            return(1);
        else
            return(0);
    }
}

int ft_mal_size(char *str)
{
    int i;
    int mal_size;
    int new_word;
    char *charset;
    
    i = 0;
    mal_size = 0;
    while (str[i])
    {
        while (ft_is_sep(str, i, charset) == 0)
            i++;
        mal_size += i;  
        while (ft_is_sep(str, i, charset) == 1)
            i++;
        new_word = i;
        while (ft_is_sep(str, i, charset) == 0)
            i++;
        mal_size += (i - new_word);
        i++;
    }
    return (mal_size);
}

int main()
{
    char str[] = "Bonjour comment ca va ?";
    char charset[] = " ";
    printf("%d\n", ft_mal_size(str));
    return (0);
    
}
