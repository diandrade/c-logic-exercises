#include <unistd.h>

void	ft_putnbr(int n)
{
	char value;

	if(n < 10)
	{
		write(1, "0", 1);

		value = n + '0';
		write(1, &value, 1);
		return;
	}

	value = n / 10 + 48;
	write(1, &value, 1);
	value = n % 10 + 48;
	write(1, &value, 1);
}

void	ft_print_comb_2(void)
{
	int	i;
	int	j;

	i = 0;
	while(i <= 98)
	{
		j = i + 1;
		while(j <= 99)
		{
			ft_putnbr(i);
			write (1, " ", 1);
			ft_putnbr(j);

			if (!(i == 98))
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
	write(1, ". ", 2);
}

int	main(void)
{
	ft_print_comb_2();
	return (0);
}
