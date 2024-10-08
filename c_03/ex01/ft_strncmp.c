/*#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(int argc, char **argv)
{
	char			*str1 = argv[1];
	char			*str2 = argv[2];
	unsigned int	n;
	int				result;
	int	equal = 0;
	int	greater = 1;
	int	less = -1;

	n = 3;
	if (argc != 3)
	{
		printf("Provide exactly 2 arguments.\n");
		printf("<string> <string> | ""n"" is %d\n", n);
		return (1);
	}
	printf("\nString 1: %s\n", str1);
	printf("String 2: %s\n\n", str2);
	result = ft_strncmp(str1, str2, n);
	if (result == equal)
		printf("	%d	| Equals until the %dº character.\n\n", equal, n);
	else if (result > 0)
		printf("	%d	| First comes after in ASCII.\n\n", greater);
	else
		printf("	%d	| First comes before in ASCII.\n\n", less);
	return (0);
}*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i >= n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}
