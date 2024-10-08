/*#include <stdio.h>

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb);

int	main(void)
{
	int	n;
	int	result;
	int	next_prime;

	n = 8;
	result = ft_is_prime(n);
	if (n <= 1)
		printf("%d it's not prime.\n", n);
	else if (result == 1)
	{
		printf("Result: %d\n", result);
		printf("The number is prime.\n");
	}
	else
	{
		next_prime = ft_find_next_prime(n);
		printf("Next prime after %d is %d\n", n, next_prime);
	}
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

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
