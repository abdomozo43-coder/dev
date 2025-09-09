#include <unistd.h>
#include <stdio.h>

int sum_digits(char *str)
{
    int i = 0;
    int sum = 0;
    while(str[i])
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            if (sum == 5)
            {
                return sum;
            }
            sum += str[i] - 48;
        }
        i++;
    }
    return sum;
}
int main()
{
    char str[] = "133";
    printf("%d\n", sum_digits(str));
}