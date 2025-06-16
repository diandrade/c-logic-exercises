#include <unistd.h>

int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
        while(*s1 == *s2 && *s1 && n--)
        {
		s1++;
		s2++;
        }

        return (*s1 - *s2);
}

void    ft_putnbr(int nb)
{
        char    arr[10];
        int     i;

        if (nb == 0)
        {
                write(1, "0", 1);
        }

        if (nb < 0)
        {
                nb -= nb;
                write(1, "-", 1);
        }

        if (nb == -2147483648)
        {
                write(1, "-2147483648", 11);
        }

        i = 0;
        while(nb != 0)
        {
                arr[i] = nb % 10 + '0';
                nb = nb / 10;
                i++;
        }

        while(i--)
        {
                write(1, &arr[i], 1);
        }
        write (1, "\n", 1);
}


void    ft_putstr(char *arr)
{
        while (*arr)
        {
                write(1, arr++, 1);
        }
}

int     main(void)
{
        char    firstString[] = "Primeira palavra: ";
        char    secondString[] = "Segunda palavra: ";
        char    thirdString[] = "O respectivo INT retornado após a comparação entre os CHAR'S é: ";
        char    s1[] = "String";
        char    s2[] = "Strin";

        ft_putstr(firstString);
        ft_putstr(s1);
        write(1, "\n", 1);
        ft_putstr(secondString);
        ft_putstr(s2);
        write(1, "\n", 1);
        ft_putstr(thirdString);
        ft_putnbr(ft_strncmp(s1, s2, 3));
        return (0);
}

