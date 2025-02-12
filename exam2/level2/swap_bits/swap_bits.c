/*#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;
	unsigned char bit;

	i = 7;
	while(i >= 0)
	{
		bit = ((octet >> i) & 1) + '0';
		if (i == 3)
			write(1, " ", 1);
		write(1, &bit, 1);
		i--;
	}
}*/

unsigned char swap_bits(unsigned char octet)
{
	return (octet >> 4) | (octet << 4);
}

/*#include <stdio.h>

int	main(void)
{
	unsigned char res;

	printf("Bit Original:\n");
	print_bits('1');
	printf("\n");
	res = swap_bits('1');
	printf("Bit Swap:\n");
	print_bits(res);
	printf("\n");
	return (0);
}*/
