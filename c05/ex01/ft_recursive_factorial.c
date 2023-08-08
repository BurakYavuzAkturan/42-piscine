
int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb == 0)
		return (1);
	if (nb > 0)
		res = nb * ft_recursive_factorial(nb - 1);
	else
		return (0);
	return (res);
}
