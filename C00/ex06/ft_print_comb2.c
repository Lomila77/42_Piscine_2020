void ft_putnbr(int a)
{
	int res;

	if (a > 9)
	{
		res = a / 10 + 48;
		write(1, &res, 1);
		res = a % 10 + 48;
		write(1, &res, 1);
	}
	else
	{
		a += 48;
		write(1, "0", 1);
		write(1, &a, 1);
	}
}

void ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			ft_putnbr(a);
			write(1, " ", 1);
			ft_putnbr(b);
			if(!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
		b = a + 1;
	}
}
