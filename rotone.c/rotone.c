/*#include <unistd.h>
int main (int argc, char **argv)
{
    int i;
    int j;

    j = 1;
    if (argc != 2)
    {
        write(1,"\n", 1);
        return 0;
    }
    while (j < argc)
    {
        i = 0;
        while (argv[j][i] != '\0')
        {
            if ((argv[j][i] >= 'a' && argv[j][i] <= 'y') ||
                (argv[j][i] >= 'A' && argv[j][i] <= 'Y'))
                argv[j][i] += 1;
            else if (argv[j][i] == 'z')
                argv[j][i] = 'a';
            else if (argv[j][i] == 'Z')
                argv[j][i] = 'A';
            write(1, &argv[j][i], 1);
            i++;
        }
        write(1, "\n", 1);
        j++;
    }
    return (0);
}
*/
#include <unistd.h>
int main(int argc , char **argv)
{
    int i = 0;

    if (argc != 2)
    {
        write(1,"\n", 1);
        return 0;
    }
    while(argv[1][i] != '\0')
    {
            if ((argv[1][i]>='a' && argv[1][i]<='y') || (argv[1][i]>='A' && argv[1][i] <= 'Y'))
            {
                argv[1][i]+=1;
            }
            if(argv[1][i]=='z')
            {
                argv[1][i] = 'a';
            }
            else if (argv[1][i] == 'Z')
            {
                argv[1][i] = 'A';
            }
                write(1, &argv[1][i], 1);
                i++;
    }
    write(1, "\n", 1);
}