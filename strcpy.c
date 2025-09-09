#include <unistd.h>
#include <stdio.h>
#include <string.h>
int ft_strlen(char *str)
{
    int i =0;
    while(str[i])
        i++;
      return i;  
}
int main (int argc, char **argv)
{
    int i = 0;
    int j= ft_strlen(argv[1])-1;
    if (argc == 2)
   // {
        //write(1, "\n", 1);
    //}
    //else
    {
    while(argv[1][i] != '\0')
    {
        write(1, &argv[1][i], 1);
        if (i < j)
     // write(1, &argv[1][i], 1);
        
            write(1, "   ", 3);
        i++;
    }
    //write(1, "\n", 1);
    }
    write(1, "\n", 1);
}
