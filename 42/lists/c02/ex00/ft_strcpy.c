#include <unistd.h>

void	ft_putstr(char *src)
{
	int	i;

	i = 0;
	while(src[i] != '\0')
	{
		write(1, &src[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while(src[i] != '\0')
	{
		i++;
	}
	return i;
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return dest;
}

int	main(void)
{
	char src[] = "String";
	char dest[ft_strlen(src)];	

	ft_putstr(src);
	ft_strcpy(dest, src);
	ft_putstr(dest);
}
