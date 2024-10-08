//#include <stdio.h>

int	ft_atoi(char *str);

int	ft_isspace(char c);

int	ft_isnumber(char c);

int	ft_issignal(char c);

/*int	main(void)
{
	char	*string = " ---+--+1234ab567";

	printf("String: %s", string);
	printf("\nReturn: %d\n", ft_atoi(string));
	return (0);
}
*/
int	ft_atoi(char *str)
{
	int		i;
	int		is_negative;
	int		number;
	int		digit;

	i = 0;
	is_negative = 0;
	number = 0;
	while (ft_isspace(str[i]))
		i++;
	while (ft_issignal(str[i]))
	{
		if (str[i++] == '-')
			is_negative = !is_negative;
	}
	while (ft_isnumber(str[i]) && str[i] != '\0')
	{
		digit = str[i] - '0';
		number = number * 10;
		number = number + digit;
		i++;
	}
	if (is_negative)
		return (-number);
	return (number);
}

int	ft_isspace(char c)
{
	return (c == '\t' || c == '\n'
		|| c == '\v' || c == '\f'
		|| c == '\r' || c == ' ');
}

int	ft_isnumber(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_issignal(char c)
{
	return (c == '-' || c == '+');
}
