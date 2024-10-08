/*#include <stdio.h> 

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	n;
	int	p;
	int	result;

	n = 5;
	p = 3;
	result = ft_recursive_power(n, p);
	printf("Result: %d\n", result);
	return (0);
}
*/
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power -1));
}
