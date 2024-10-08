#include <unistd.h>

/*void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-1);
	write(1, "\n", 1);
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
}
*/
void	ft_putnbr(int nb)
{
	long	number;
	char	digit;

	number = nb;
	if (nb < 0)
	{
		write (1, "-", 1);
		number = -number;
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else
	{
		digit = number + 48;
		write(1, &digit, 1);
	}
}
