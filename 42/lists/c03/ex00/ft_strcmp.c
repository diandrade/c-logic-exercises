#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(i <= n)
	{
		if(s1[i] == s2[i])
		{
			j++;
		}
		i++;

	}
	if (j - 1 == n)
	{
		return (0);
	}
	return (1);

}

int	main(void)
{
	char	s1[] = "String";
	char	s2[] = "String";
	int	returned_value = ft_strncmp(s1, s2, 6);
	char	conversion_to_char = returned_value + '0';

	write(1, &conversion_to_char, 1);
	return	(0);
}
