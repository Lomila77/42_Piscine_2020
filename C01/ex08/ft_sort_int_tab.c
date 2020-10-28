void ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	j = 1;
	size--;
	while (i < size)
	{
		while (j <= size)
		{
			if (tab[i] > tab[j])
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
		j = i + 1;
	}
}
