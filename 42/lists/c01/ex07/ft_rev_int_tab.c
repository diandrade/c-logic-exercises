#include <unistd.h>

void	ft_putnbr(int tab)
{
	char	arr[10];
	int	i;

	if (tab == 0)
	{
		write(1, "0", 1);
		return;
	}

	if (tab < 0)
	{
		write(1, "-", 1);
		tab = -tab;
	}

	if (tab == -2147483648)
	{
		write(1, "2147483648", 11);
		return;
	}

	i = 0;
	while (tab != 0)
	{
		arr[i] = tab % 10 + '0';
		tab = tab / 10;
		i++;
	}

	while (i > 0)
	{
		i--;
		write(1, &arr[i], 1);
	}
}

void	ft_putstr(int *tab, int size)
{
	int i = 0;
	write(1, "{", 1);
	while(i < size)
	{
		ft_putnbr(tab[i]);
		if (i < size - 1)
		{
			write(1, ", ", 2);
		}
		i++;
	}
	write(1, "}\n", 2);
}

int	ft_intlen(int *tab)
{
	int	i;

	i = 0;
	while(tab[i] != 0)
	{
		i++;
	}
	return i;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swaps;
	int	temp;

	i = 0;
	swaps = size / 2;
	while(i < swaps){
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}	
}

int	main(void)
{
	int	tab[] = {10, 20, 30, 400, 5000, -2147483648};
	int	terminated[] = {10, 20, 30, 400, 500, -2147483648, 0};
	
	ft_putstr(tab, ft_intlen(terminated));
	ft_rev_int_tab(tab, ft_intlen(terminated));
	ft_putstr(tab, ft_intlen(terminated));

	return (0);
}
