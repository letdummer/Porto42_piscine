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
                ft_putchar(a);
                ft_putchar(b);
                ft_putchar(c);
                if (a != '7' || b != '8' || c != '9')  // Avoid trailing comma and space
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                c++;
            }
            b++;
        }
        a++;
    }
}
