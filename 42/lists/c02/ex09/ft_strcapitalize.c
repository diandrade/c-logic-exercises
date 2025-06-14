#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	if (str[0] >= 'a' && str[0] <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	if (str[0] >= 'A' && str[0] <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	if (str[0] >= '0' && str[0] <= '9')
		return (1);
	return (0);
}

char *ft_strcapitalize(char *str)
{
        int i;

        i = 0;
        while (str[i] != '\0')
        {
                if (ft_str_is_lowercase(&str[i]) == 1)
                {
                        if ((ft_str_is_numeric(&str[i - 1])) == 0 && (ft_str_is_uppercase(&str[i - 1]) == 0) && (ft_str_is_lowercase(&str[i - 1]) == 0))
                        {
                                str[i] = str[i] - 32;
                        }
                }
                i++;
        }
        return (str);
}

void ft_putstr(char *str)
{
        while (*str)
        {
                write(1, str++, 1);
        }
        write(1, "\n", 1);
}

int main(void)
{
        char str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
        ft_putstr(str);
        ft_strcapitalize(str);
        ft_putstr(str);

        return (0);
}
