/*#include <stdio.h> 

int	ft_is_prime(int nb);

int	main(void)
{
	int	n;
	int	result;

	n = 7;
	result = ft_is_prime(n);
	printf("result: %d\n", result);
	if (result == 1)
		printf("The number is prime.\n");
	else
		printf("It's not prime.\n");
	return (0);
}*/

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
