#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if(!((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_putnbr(int nb)
{
	nb = nb + '0';
	write(1, &nb, 1);	
}

int	main(void)
{
	char	str1[] = "S*ring";
	char	str2[] = "String";

	ft_putnbr(ft_str_is_alpha(str1));
	write(1, "\n", 1);
	ft_putnbr(ft_str_is_alpha(str2));
	write(1, "\n", 1);

	return (0);
}
