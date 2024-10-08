/*#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[] = "Keep Swimming!";
	char	dest[10];
	int	n;

	n = 3;
	ft_strncpy(dest, src, n);
	printf("Source: %s\n", src);
	printf("Destiny: %s\n", dest);
}
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
