/*#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(int argc, char **argv)
{
	char			*dest = argv[1];
	char			*src = argv[2];
	unsigned int	nb;

	nb = 3;
	if (argc != 3)
	{
		printf("Provide 2 arguments. The number of char is %d\n", nb);
		printf("\"string\" \"string\".\n");
		return (1);
	}
	printf("Before: %s %s\n", dest, src);
	ft_strncat(dest, src, nb);
	printf("After: %s\n", dest);
	return (0);
}
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
