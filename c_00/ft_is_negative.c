#include <unistd.h>

/*void	ft_is_negative(int n);

int	main(void)
{
	ft_is_negative(-1);
	return (0);
}
*/
void	ft_is_negative(int n)
{
	char	resultado;

	if (n >= 0)
		resultado = 'P';
	else
		resultado = 'N';
	write(1, &resultado, 1);
}
