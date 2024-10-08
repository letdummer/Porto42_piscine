/*#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[20] = "Keep Swimming";
	char	dest[20];

	ft_strcpy(dest, src);
	printf("Source: %s\n", src);
	printf("Destiny: %s\n", dest);
}*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
