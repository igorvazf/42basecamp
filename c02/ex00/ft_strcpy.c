char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (dest[x])
	{
		x++;
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (x >= i)
	{
		dest[x] = '\0';
		x--;
	}
	return (dest);
}
