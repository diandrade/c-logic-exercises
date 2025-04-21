#include "ft.h"
void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        return ft_putstr("2147483648");
    }

    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }

    if (nb > 9)
        ft_putnbr(nb / 10);
    ft_putchar((nb % 10) + '0');
}