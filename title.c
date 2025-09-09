/*
#include <unistd.h>
int main(int argc, char **argv)
{
    int i = 0;
    int j = 1;
    if (argc != 2)
    {
        write(1, "\n", 1);
    }
    //while(argv[j][i])
    else
    {
            if(argv[j][i] >= 'a' && argv[j][i] <= 'z')
            {
                argv[j][i] -= 32;
                //write(1, &argv[j][i], 1);
            }
            while (argv[j][i])
            {
                write(1, &argv[j][i], 1);
                i++;
            }
    }
}
*/
#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 1;

    if (argc != 2)
    {
        write(1, "\n", 1);
    }
    else
    {
        while (argv[j][i])
        {
            if ((i == 0 && argv[j][i] >= 'a' && argv[j][i] <= 'z') || (argv[j][i - 1] == ' ' && argv[j][i] >= 'a' && argv[j][i] <= 'z'))
            {
                argv[j][i] -= 32;
                write(1, &argv[j][i], 1);
            }
            else
            {
                write(1, &argv[j][i], 1);
            }
            i++;
        }
    }
}

