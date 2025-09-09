#include <unistd.h>
#include <stdio.h>

int main ()
{
    char nb = '0';
    while(nb <= '9')
    {
        write (1,&nb,1);
        nb++;
    }
    if(nb)

}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 12:54:44 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/29 13:09:28 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(int n)
{
    int num1;
        int num2;
            if(n < 9)
                {
                        num1 = n + '0';
                            }else if(n < 100)
                                {
                                        num1 = n % 10 + '0';
                                                num2 = (n / 10) % 10 + '0';
                                                        write(1, &num2, 1);
                                                                write(1, &num2, 1);
                                                                    }
                                                                    }

                                                                    void    ft_putnbr(int nb)
                                                                    {
                                                                        int nb = 0;
                                                                            int k = 0;

                                                                                while (nb <= 100 )
                                                                                    {
                                                                                            if(nb % 3 == 0 && nb % 5 == 0)
                                                                                                    {
                                                                                                                write(1, "fizzbuzz", 8);
                                                                                                                        }
                                                                                                                                else if (nb % 3 == 0)
                                                                                                                                        {
                                                                                                                                                write(1, "fizz", 4);
                                                                                                                                                        }
                                                                                                                                                                else if (nb % 5 == 0)
                                                                                                                                                                        write(1, "buzz", 4);
                                                                                                                                                                                else
                                                                                                                                                                                            ft_putchar(nb);
                                                                                                                                                                                                    nb++;
                                                                                                                                                                                                        }
                                                                                                                                                                                                        }
