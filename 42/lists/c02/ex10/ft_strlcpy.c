#include <unistd.h>

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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while(src[i] != '\0' && n)
	{
		dest[i] = src[i];
		i++;
		n--;
	}

	if(n != 0)
	{
		dest[i] = '\0';		
	}
	return dest;
}

int	main(void)
{
	char	src[] = "String";
	char	dest[ft_strlen(src)];

	ft_strncpy(dest, src, 5);
	ft_putstr(dest);

	return (0);
}
