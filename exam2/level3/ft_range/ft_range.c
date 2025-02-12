#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	*range;
	int	dif;

	if (start <= end)
		dif = (end - start) + 1;
	else	
		dif = (start - end) + 1;
	range = (int *)malloc(dif * sizeof(int));
	if (!range)
		return (0);
	i = 0;
	while (i < dif)
	{
		range[i] = start;
		if (start < end)
			start++;
		else
			start--;
		i++;
	}
	return (range);

}

#include <stdio.h>

int	main(void)
{
	int	i;
	int	*res;
	int	start = 1;
	int	end = -10;
	int	dif;

	if (start <= end)
		dif = (end - start) + 1;
	else
		dif = (start - end) + 1;
	res = ft_range(start, end);

	i = 0;
	while(i < dif)
	{
		printf("%i ", res[i]);
		i++;
	}
	printf("\n");
}
