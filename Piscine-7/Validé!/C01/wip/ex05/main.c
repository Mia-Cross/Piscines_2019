#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str);

int main ()
{
  char str[7] = "Cookie";
  ft_putstr(&str);
  return(0);
}
