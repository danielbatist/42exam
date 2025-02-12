
unsigned int	mdc(unsigned int a, unsigned int b)
{
	unsigned int tmp;
	
	while(b != 0)
	{
		tmp = b;
		b = a % b;
		a = tmp;
	}
	return (a);
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return (0);
	return (a / mdc(a, b) * b);
}
#include <stdio.h>

int	main(void)
{
	int	a = 4;
	int	b = 6;
	int	res = lcm(a, b);
	printf("%i é o mmc entre %i e %i\n", res, a, b);
}

