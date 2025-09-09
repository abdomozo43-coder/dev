#include <unistd.h>
int main(void)
{
    int     i;

    i = 1;
   while (i <= 100)
   {
    if (i % 4 == 0 && i % 7 == 0)
    {
        write(1, "fizzbuzz\n", 9);
    }
    else if(i % 4 == 0)
    {
        write(1,"fizz\n",5);
    }
    else if (i % 7 == 0)
    {
        write(1,"buzz\n",5);
    }
    else
    {
        if(i<=9)
        {
            char u =i + '0';
            write(1,&u,1);
        }
        else if (i <=100)
        {
            char o = i / 10 + '0';
            char o1 = i % 10 + '0';
            write(1,&o,1);
            write(1,&o1,1);
        }
        write(1,"\n",1);
    }
    i++;
    }
}