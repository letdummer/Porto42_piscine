/*#include <stdio.h> 

int	ft_sqrt(int nb);

int	main(void)
{
	int	number;
	int	result;

	number = 16;
	result = ft_sqrt(number);
	if (result != 0)
		printf("The square root of %d is %d.\n", number, result);
	else
		printf("The number %d does not have an integer square root.\n", number);
	return (0);
}
*/
int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
	{
		return (0);
	}
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
