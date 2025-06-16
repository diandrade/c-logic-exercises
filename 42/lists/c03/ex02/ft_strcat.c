#include <unistd.h>

char *ft_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return original_dest;
}

void	ft_putstr(char *arr)
{
	while(*arr)
	{
		write(1, arr++, 1);
	}
}

int	main(void)
{
	char	dest[] =  "Olá, ";
	char    src[100] = "Mundo.";
	char	returned_value = *ft_strcat(dest, src);
	ft_putstr(&returned_value);
	return (0);
}
