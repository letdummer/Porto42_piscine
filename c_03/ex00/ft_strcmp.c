/*#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	char	*str_01 = argv[1];
	char	*str_02 = argv[2];
	int		result;

	if (argc != 3)
	{
		printf("Provide 2 arguments.\n");
		return (1);
	}
	printf("\nFirst string: %s\n", str_01);
	printf("Second string: %s\n\n", str_02);
	result = ft_strcmp(str_01, str_02);
	if (result == 0)
		printf("	[0]	| The strings are equals\n\n");
	else if (result > 0)
		printf("	[-1]	| The first string is longer than the second.\n\n");
	else
		printf("	[1]	| The second string is longer than the first.\n\n");
	return (0);
}
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
