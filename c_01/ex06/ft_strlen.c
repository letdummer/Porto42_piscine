/*#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	texto[] = "KeepSwimming";
	int	count;

	count = ft_strlen(texto);
	printf("tamanho da string: %d\n", count);
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
