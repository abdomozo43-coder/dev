#include <unistd.h>
int main (int argc , char **argv)
{
    int i = 1;
    if (argc == 2)
    {
        int j = 0;
        while (argv[i][j] != '\0')
        {
            if(j % 2 == 0)
            {
                write(1,&argv[i][j] ,1);
            }
            j++;
        }
        write(1,"\n",1);
    }
}