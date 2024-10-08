/*
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 22444;
	b = 361;
	ft_div_mod(a, b, &div, &mod);
	printf("Divisao de a por b: %d\n", div);
	printf("Modulo de a por b: %d\n", mod);
}
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
