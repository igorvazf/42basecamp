#include <unistd.h>

void	ft_putchar(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		write(1, &arg[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	argc = 0;
	ft_putchar(argv[0]);
	return (0);
}
