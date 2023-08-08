
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	first_letter;

	first_letter = 'a';
	while (first_letter <= 'z')
	{
		write(1, &first_letter, 1);
		first_letter++;
	}
}
