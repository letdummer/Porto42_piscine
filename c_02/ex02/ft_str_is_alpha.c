/*#include <stdio.h>

int	ft_str_is_alpha(char *str);
int	is_alpha(char c);

int	main(void)
{
	char	str[] = "123";
	char	str2[] = "BomDia";
	char	str3[] = "";

	printf("%s: %d\n", str, ft_str_is_alpha(str));
	printf("%s: %d\n", str2, ft_str_is_alpha(str2));
	printf("%s %d\n", str3, ft_str_is_alpha(str3));
}
*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
