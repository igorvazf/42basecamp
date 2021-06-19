#include <unistd.h>

void	ft_putchar(int nb)
{
	write(1, &nb, 1);
}

void	calc(int nb)
{
	if (nb >= 10 || nb < -9)
	{
		calc (nb / 10);
		calc (nb % 10);
	}
	else if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
	}
	calc(nb);
}
