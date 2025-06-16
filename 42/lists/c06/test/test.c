#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	if(!str)
	{
		write(1, "\n", 1);
	}

	i = 0;	
	while(*str)
	{
		write(1, &str[i++], 1);
	}
}

int	main(void)
{
	char	str[] = "String";

	ft_putstr(str);
	ft_putstr(NULL);
}
