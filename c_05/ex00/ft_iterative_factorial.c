/*#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	result;

	result = ft_iterative_factorial(5);
	printf("%d\n", result);
}*/

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		result = result * nb;
		nb --;
	}
	return (result);
}
