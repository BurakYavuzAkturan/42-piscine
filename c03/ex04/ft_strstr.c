
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i])
	{
		while (str[i + j] == to_find[j] && str[i + j])
			j++;
		if (!(to_find[j]))
			return (str + i);
		i++;
	}
	return (0);
}
