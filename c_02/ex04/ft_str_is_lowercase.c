/*
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	str[11] = "test";
	char	str2[11] = "TEST";
	char	str3[11] = "";

	printf("%s: %d\n", str, ft_str_is_lowercase(str));
	printf("%s: %d\n", str2, ft_str_is_lowercase(str2));
	printf("%s %d\n", str3, ft_str_is_lowercase(str3));
}
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
