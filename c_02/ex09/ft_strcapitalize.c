/*#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "ola, tudo bem? 42palaVras quarenta-e-duas";

	printf("\n%s\n", str);
	ft_strcapitalize(str);
	printf("\n%s\n", str);
}
*/
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (n == 1)
			{
				str[i] -= 32;
				n = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			n = 0;
		else
			n = 1;
		i++;
	}
	return (str);
}
