#include "printf.h"

int ft_putnbr(int nbr)
{
    char    c;
    int     count;

    count = 0;
    if (nbr == -2147483648)
    {
        count += ft_putchar('-');
        count += ft_putchar('2');
        nbr = 147483648;
    }
    if (nbr < 0)
    {
        count += ft_putchar('-');
        nbr *= -1;
    }
    else if (nbr >= 10)
    {
        count += ft_putnbr(nbr / 10);
    }
    c = nbr % 10 + '0';
    count += ft_putchar(c);
    return count;
}