/*#include <stdio.h> 

int	ft_fibonacci(int index);

int	main(void)
{
	int	index;
	int	i;

	index = 10;
	i = 0;
	ft_fibonacci(index);
	while (i <= index)
	{
		printf("Fibonacci: %d = %d\n", i, ft_fibonacci(i));
		i++;
	}
}
*/
int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}
