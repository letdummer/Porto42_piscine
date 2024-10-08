/*#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[] = "Keep Swimming!";

	ft_strupcase(str);
	printf("%s\n", str);
}
*/
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
