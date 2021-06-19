#include <unistd.h>

void	ft_putchar(int n)
{
	write(1, &n, 1);
}

void	display_numb(int a, int b)
{
	ft_putchar((a / 10) + '0');
	ft_putchar((a % 10) + '0');
	ft_putchar(' ');
	ft_putchar((b / 10) + '0');
	ft_putchar((b % 10) + '0');
	if (a < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 00;
	b = 00;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			display_numb(a, b);
			b++;
		}
		a++;
	}
}
