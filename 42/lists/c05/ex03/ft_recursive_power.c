#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{

	if (power < 0)
	{
		return (0);
	}

	if (power == 0)
	{
		return (1);
	}

	else
	{
		return ft_recursive_power(nb, power - 1) * nb;
	}	
}

void	ft_putnbr(int nb)
{
	char	arr[10];
	int	i;

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

int	main(void)
{
	int	output;

	output = ft_recursive_power(10, 4);
	ft_putnbr(output);
}
