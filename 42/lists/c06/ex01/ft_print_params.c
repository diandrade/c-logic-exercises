#include <unistd.h>

int	main(int argc, char *argv[])
{
	(void)argc;
	int	i;
	int	j;

	i = 1;
	while(argv[i] != NULL)
	{
		j = 0;
		while(argv[i][j] != '\0')
        	{
                	write(1, &argv[i][j], 1);
                	j++;
        	}
		i++;
		write(1, "\n", 1);
	}
}
