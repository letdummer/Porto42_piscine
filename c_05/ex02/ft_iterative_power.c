/*#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int	n;
	int	p;
	int	result;

	n = 5;
	p = 3;
	result = ft_iterative_power(n, p);
	printf("%d\n", result);
}
*/
int	ft_iterative_power(int nb, int power)
{
	int	count;
	int	result;

	if (power == 0 && nb == 0)
	{
		return (1);
	}
	if (power <= 0)
	{
		return (0);
	}
	count = 1;
	result = 1;
	while (count <= power)
	{
		result = result * nb;
		count++;
	}
	return (result);
}
