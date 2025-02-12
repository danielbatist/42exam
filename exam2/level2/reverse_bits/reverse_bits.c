#include <unistd.h>

/*void	print_bits(unsigned char octet)
{
	int	i;
	unsigned char bit;

	i = 7;
	while (i >= 0)
	{
		bit = ((octet >> i) & 1) + '0';
		write (1, &bit, 1);
		i--;
	}
}*/

unsigned char	reverse_bits(unsigned char octet)
{
	int	i;
	unsigned char	res;

	res = 0;
	i = 8;
	while (i > 0)
	{
		res = (res << 1) | (octet & 1);
		octet >>= 1;
		i--;
	}
	return (res);
}

/*#include <stdio.h>

int	main(void)
{
	unsigned char res;

	printf("Bits Original:\n");
	print_bits('5');
	printf("\n");
	res = reverse_bits('5');
	printf("Bits Reverso:\n");
	print_bits(res);
	printf("\n");
	return (0);
}*/
