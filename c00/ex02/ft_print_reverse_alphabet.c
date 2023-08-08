
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	last_letter;

	last_letter = 'z';
	while (last_letter >= 'a')
	{
		write(1, &last_letter, 1);
		last_letter--;
	}
}
