/*#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[] = "Hello";
	char	src[] = ", world!";

	printf("	Before: %s %s\n", dest, src);
	ft_strcat(dest, src);
	printf("	After: %s\n", dest);
	return (0);
}*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
