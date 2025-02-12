#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;
	unsigned char bit;

	i = 7;
	while (i >= 0)
	{
		bit = ((octet >> i) & 1) + '0';
		write(1, &bit, 1);
		i--;
	}
}

int	main(void)
{
	unsigned char num;
	
	num = '1';
	print_bits(num);
	write(1, "\n", 1);
	return (0);
}

