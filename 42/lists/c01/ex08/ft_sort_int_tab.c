#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	arr[10];
	int	i;

	if(nb == 0)
	{
		write(1, "0", 1);
		return;
	}

	if(nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}

	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
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
}

void	ft_putstr(int *tab, int length)
{
	int	i;

	i = 0;
	write(1, "{", 1);
	while(i < length)
	{
		ft_putnbr(tab[i]);
		if(i < length - 1)
		{
			write(1, ", ", 2);
		}
		i++;
	}
	write(1, "}\n", 2);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while(i < size - 1)
	{
		j = 0;
		while(j < size - 1 - i)
		{
			if(tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	tab[] = {2, 1, 4, 3, 5};
	int	length;

	length = sizeof(tab) / sizeof(tab[0]);
	ft_putstr(tab, length);
	ft_sort_int_tab(tab, length);
	ft_putstr(tab, length);
}
