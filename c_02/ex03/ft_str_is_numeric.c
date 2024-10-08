/*#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	str[] = "0123456789";
	char	str2[] = "012E456789";
	char	str3[] = "";

	printf("%s: %d\n", str, ft_str_is_numeric(str));
	printf("%s: %d\n", str2, ft_str_is_numeric(str2));
	printf("%s %d\n", str3, ft_str_is_numeric(str3));
}
*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 47 || str[i] >= 58)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
