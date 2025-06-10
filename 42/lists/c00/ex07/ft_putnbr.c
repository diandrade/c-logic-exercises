#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	arr[10];
	int	i;

	if (nb == 0)
	{
		write(1, "0", 1);
		return;
	}

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}

	if (nb == -2147483648)
	{
		write(1, "2147483648\n", 11);
		return;
	}

	i = 0;
	while (nb != 0)
	{
		arr[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}

	while (i > 0)
	{
		i--;
		write(1, &arr[i], 1);
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_putnbr(-2147483648);
	ft_putnbr(42);

	return (0);
}
