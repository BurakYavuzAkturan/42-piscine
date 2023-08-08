
int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	is_neg;

	i = 0;
	is_neg = 1;
	while (str[i])
	{
		while (str[i++] <= 32 || str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				is_neg *= -1;
		}
		result = 0;
		while (str[i] >= '0' && str[i] <= '9')
		{
			result *= 10;
			result += str[i] - 48;
			i++;
		}
		return (result * is_neg);
	}
	return (0);
}
