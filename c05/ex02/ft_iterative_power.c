int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if (power > 0)
	{
		while (i < power)
		{
			nb *= n;
			i++;
		}
	}
	else if (power == 0)
	{
		nb = 1;
	}
	else
	{
		nb = 0;
	}
	return (nb);
}
