int	max(int *tab, unsigned int len)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while (len > 0)
	{
		if (tab[i] < tab[len - 1])
		{
			tmp = tab[i];
			tab[i] = tab[len - 1];
			tab[len - 1] = tmp;
		}
		len--;
	}
	return (tab[i]);
}

