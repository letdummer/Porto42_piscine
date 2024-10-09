#include <unistd.h>

/*void	ft_print_comb(void);

int	main(void)
{
	ft_print_comb();
}
*/
void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';

	while (a <= '7')
	{
		b = a + 1;

		while (b <= '8')
		{
			c = b + 1;

			while (c <= '9')
			{	
				ft_putchar(a + 1);
				ft_putchar(b + 1);
				ft_putchar(c + 2);
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
