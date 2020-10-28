void ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	size--;
	j = size;
	while (i <= size / 2)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}
