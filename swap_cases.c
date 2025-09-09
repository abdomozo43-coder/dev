#include <unistd.h>
char *swap_cases(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - ('a' - 'A');
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + ('a' - 'A');
        i++;
    }
    return (str);
}
int main ()
{
    char str[] = "Hello qQAWorld!";
    char *result = swap_cases(str);
    write(1, result, 13);
    return (0);
}