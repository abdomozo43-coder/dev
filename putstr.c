#include <unistd.h>
#include <stdio.h>
#include <string.h>
char	ft_putstr(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        //write(1, &str[i], 1);
        i++;
    }
    //write(1,"\n",1);
    return (i);
}
int main ()
{
    char l[] = "mehdi mrid f raso";
    //ft_putstr(l);
    printf("%d\n",ft_putstr(l));
}