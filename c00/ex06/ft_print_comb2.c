
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	first_digits;
	int	second_digits;

	first_digits = 0;
	while (first_digits <= 98)
	{
		second_digits = first_digits + 1;
		while (second_digits <= 99)
		{
			ft_putchar(first_digits / 10 + 48);
			ft_putchar(first_digits % 10 + 48);
			write(1, " ", 1);
			ft_putchar(second_digits / 10 + 48);
			ft_putchar(second_digits % 10 + 48);
			if (first_digits != 98)
			{
				write(1, ", ", 2);
			}
			second_digits++;
		}
		first_digits++;
	}
}
