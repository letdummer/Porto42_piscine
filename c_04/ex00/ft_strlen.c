/*#include <stdio.h>

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	char	*phrase = argv[1];
	int		length;

	if (argc != 2)
	{
		printf("Provide 1 argument.\n");
		return (1);
	}
	length = ft_strlen(phrase);
	printf("Size of string: %d\n", length);
	return (0);
}
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
