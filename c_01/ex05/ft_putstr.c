/*#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	*phrase;

	phrase = "KeepSwimming";
	ft_putstr(phrase);
}
*/
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}
