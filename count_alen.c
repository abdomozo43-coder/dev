int count_alen(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] == 'a')
        {
            return i;
        }
        i++;
    }
    return i;
}
#include <stdio.h>
int main()
{
    char str[] = "Hello, aworld!";
    printf("%d\n", count_alen(str));
}