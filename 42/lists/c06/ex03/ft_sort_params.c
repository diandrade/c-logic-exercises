#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	temp;

	while(argc-- != 0)
	{
		i = 1;
		while(i - argc - 1)
		{
			if(argv[argc][i] > argv[argc][i + 1])
			{
				temp = argv[argc][i];
				argv[argc][i] = argv[argc][i + 1];
				argv[argc][i + 1] = temp;
			}
			i++;
			ft_putstr(argv[i]);
			write(1, "\n", 1);
		}
	}
}
