#include <unistd.h>



int	ft_strlen(*tab)
{
	int	i;

	i = 0;
	while(tab[i] != '\0')
	{
		i++;
	}
	return	i;
}

void	ft_rev_int_tab(int *tab, int size)
{
	
}

int	main(void)
{
	char	tab[] = {1, 2, 3, 4, 5};

	ft_putnbr(tab);
	ft_rev_int_tab(tab, ft_strlen(tab));
	ft_putnbr(tab);

	return (0);
}
