#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	if ((n < 1) || (n > 9))
		return (0);
	else
	{
		
	}

}

int		main(int n)
{
	ft_print_combn(5);
}