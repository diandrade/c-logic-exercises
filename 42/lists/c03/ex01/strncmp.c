#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putnbr(int nb)
{
	char	arr[10];
	int	i;

	if(nb == 0)
	{
		write(1, "0", 1);
		return;
	}

	if(nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}

	i = 0;
	while(nb != 0)
	{
		arr[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}

	while(i--)
	{
		write(1, &arr[i], 1);
	}
}

int	main(void)
{
	char	s1[] = "String";
	char	s2[] = "Strins";

	ft_putnbr(ft_strcmp(s1, s2));
	write(1, "\n", 1);
	
	return	(0);
}
