void ft_dec(int *ptr )
{
    (*ptr)--;
}
#include <stdio.h>
int main()
{
    int a = 7000;
    int *p = &a;
    ft_dec(p);
    printf("%d\n",*p);
}