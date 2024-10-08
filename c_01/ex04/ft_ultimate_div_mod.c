/*#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 22444;
	b = 361;
	ft_ultimate_div_mod(&a, &b);
	printf("Divisao de a por b: %d\n", a);
	printf("Modulo de a por b: %d\n", b);
}
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
