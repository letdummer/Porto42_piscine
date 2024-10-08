/*
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	str[11] = "teste123";
	char	str2[11] = "Çé¿";
	char	str3[11] = "";

	printf("%s: %d\n", str, ft_str_is_printable(str));
	printf("%s: %d\n", str2, ft_str_is_printable(str2));
	printf("%s %d\n", str3, ft_str_is_printable(str3));
}
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
