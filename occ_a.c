int occ_a(char *str, char a, int count)
{
    count = 0;
    a = 'a';
    while(*str)
    {
        if(*str == a)
        {
            count++;
        }
        str++;
    }
    return count;
}
#include <stdio.h>
int main()
{
    char str[] = "banaaaaaaaaaaaaaaana";
    char a;
    int count;
    printf("%d\n", occ_a(str, a, count));

}
