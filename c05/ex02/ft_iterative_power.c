
int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	res = 1;
	while (power-- > 0)
		res *= nb;
	return (res);
}
