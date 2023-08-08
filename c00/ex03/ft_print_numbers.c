
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	first_num;

	first_num = '0';
	while (first_num <= '9')
	{
		write(1, &first_num, 1);
		first_num++;
	}
}
