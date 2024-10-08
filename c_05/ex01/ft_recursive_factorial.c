/*#include <stdio.h> 

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int		result;

	result = ft_recursive_factorial(5);
	printf("%d\n", result);
}
*/
int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	if (nb > 1)
	{
		result = nb * ft_recursive_factorial(nb - 1);
		return (result);
	}
	else
		return (1);
}
