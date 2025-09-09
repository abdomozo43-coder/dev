#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}
int main ()
{
    int n;// = 42;
    int *ptr = &n;
    ft_ft(ptr);
    printf("%d\n",n);
}