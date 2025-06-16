#include <unistd.h>

void	ft_putstr(char *arr)
{
	while(*arr)
	{
		write(1, arr++, 1);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while(*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (s1 - s2);
}

int	main(int argc, char *argv[])
{
	int	i;
	char	*temp;

	i = 1;
	while(argc-- && argc != 0)
	{
		if(ft_strcmp(argv[argc], argv[argc + 1]) > 0)
		{
			temp = argv[argc];
			argv[argc] = argv[argc + 1];
			argv[argc + 1] = temp;	
		}
		ft_putstr(argv[i]);
		i++;
	}

	return (0);
}
