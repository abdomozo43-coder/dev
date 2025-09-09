#include <unistd.h>
int main(int argc, char **argv)
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
            if ((argv[j][i] >= 'a' && argv[j][i] <= 'm') ||
                (argv[j][i] >= 'A' && argv[j][i] <= 'M'))
                argv[j][i] += 13;
            else if ((argv[j][i] >= 'n' && argv[j][i] <= 'z') ||
                     (argv[j][i] >= 'N' && argv[j][i] <= 'Z'))
                argv[j][i] -= 13;
            write(1, &argv[j][i], 1);
            i++;
        }
        write(1, "\n", 1);
        j++;
    }
    return (0);
}