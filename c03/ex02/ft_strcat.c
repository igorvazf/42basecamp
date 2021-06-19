char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[x])
	{
		dest[i + x] = src[x];
		x++;
	}
	dest[i + x] = '\0';
	return (dest);
}
