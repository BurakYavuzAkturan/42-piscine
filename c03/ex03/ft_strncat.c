
int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				len_of_dest;
	unsigned int	i;

	len_of_dest = ft_len(dest);
	i = 0;
	while (src[i] && i < nb)
	{
		dest[len_of_dest] = src[i];
		i++;
		len_of_dest++;
	}
	dest[len_of_dest] = '\0';
	return (dest);
}
