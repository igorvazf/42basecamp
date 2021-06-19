#include <unistd.h>

void	ft_putchar(int n)
{
	write(1, &n, 1);
}

void	display_numb(int n1, int n2, int n3)
{
	ft_putchar(n1);
	ft_putchar(n2);
	ft_putchar(n3);
	if (n1 == 55 && n2 == 56 && n3 == 57)
	{
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	while (a <= 57)
	{
		b = a + 1;
		while (b <= 57)
		{
			c = b + 1;
			while (c <= 57)
			{
				display_numb(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
