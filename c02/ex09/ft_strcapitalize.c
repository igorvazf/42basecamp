char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	x;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		x = i - 1;
		if (str[x] < 'A' || (str[x] > 'Z' && str[x] < 'a') || str[x] > 'z')
		{
			if (str[x] < 48 || str[x] > 57)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
