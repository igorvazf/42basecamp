void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aa;
	int	bb;

	aa = *a / *b;
	bb = *a % *b;
	*a = aa;
	*b = bb;
}
