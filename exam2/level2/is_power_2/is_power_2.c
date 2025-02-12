int	is_power_of_2(unsigned int n)
{
	if ((n & (n - 1)) == 0 && n != 0)
		return (1);
	else
		return (0);
}
#include <stdio.h>

int	main(void)
{
	int	res;
	int	num;

	num = 13;
	res = is_power_of_2(num);
	if (res == 1 )
		printf("%i é uma potencia de 2.\n", num);
	else
		printf("%i não é uma potencia de 2.\n", num);
}
