#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        write(1, "\n", 1);
        return 0;
    }

    char *s1 = argv[1];
    char *s2 = argv[2];
    int i = 0;

    while (s1[i])
    {
        int j = 0;
        int k = 0;
        char c = s1[i];

        // Check if this char appeared before in s1
        while (j < i)
        {
            if (s1[j] == c)
                break;
            j++;
        }
        if (j != i) // already appeared before
        {
            i++;
            continue;
        }

        // Check if c is in s2
        while (s2[k])
        {
            if (s2[k] == c)
            {
                write(1, &c, 1);
                break;
            }
            k++;
        }
        i++;
    }
    write(1, "\n", 1);
    return 0;
}
