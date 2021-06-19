int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	x;
	unsigned int	i;

	x = 0;
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	x = (unsigned char) s1[i] - (unsigned char) s2[i];
	return (x);
}
