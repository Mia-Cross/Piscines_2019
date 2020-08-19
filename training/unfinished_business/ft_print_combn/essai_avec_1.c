#include <unistd.h>

void    ft_print_comb_solo(char c)                 
{                                             
        c = '0';                              
        while (c <= '9')
        {
            write(1, &c, 1);
            c++;
        }
}

void    ft_print_comb(char c)
{
    char d;
    
    c = '0';
    ft_putchar(c);
    d = '0';
    while (c < d && c < '9')
    {
      ft_putchar(d);
      d++;
    }
    c++;
}
                                              
void    ft_print_combn(int n)                 
{                                             
        char c;
        char d;
        int i;
                                              
        c = '0';                              
        i = 0;
        while (i < n)                         
        {                                     
                ft_print_comb(c);
                d = c + 1;
                while (j < n)
                {
                    ft_print_comb(c + j);
                    j++;
                }
                i++;                          
        }                                     
}                                             

int main()
{
    ft_print_combn(2);

    return 0;
}
