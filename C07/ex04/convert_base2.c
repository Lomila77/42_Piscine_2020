#include "header.h"
#include <stdio.h>

int	lenmalloc(int nbr, char *base, int len)
{
	int i;

	i = 0;
	if (nbr < len)
	{
		i++;
		printf("if nbr < len : i = %d\n", i);
	}
	if (nbr >= len)
	{
		//printf("if  = %d\n", i);
		return (i = lenmalloc(nbr / len, base, len));
	}
	printf("i = %d\n", i);
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	convert_base(int nbr, char *base, int len, char *str)
{
	int i;

	i = 0;
	if (nbr < len)
		str[i++] = base[nbr % len];;
	if (nbr >= len)
	{
		convert_base(nbr / len, base, len, str);
		str[i++] = base[nbr % len];
	}
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int len;
	int nb;
	int lenm;
	char *str;
	int val;

	str = NULL;
	val = 0;
	nb = ft_atoi_base(nbr, base_from);
	if (nb < 0)
	{
		val = 1;
		nb *= -1;
	}
	if (!(len = check_base(base_to)))
		return (0);
	printf("len = %d\n", len);
	printf("nb = %d\n", nb);
	if ((str = malloc(sizeof(char) * lenmalloc(nb, base_to, len))) == NULL)
		return (0);
	printf("lenmal = %d\n", lenmalloc(nb, base_to, len));
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	convert_base(nb, base_to, len, str);
	return (str);
}

int main(int argc, char **argv)
{
	char *tab;
	tab = ft_convert_base(argv[1], argv[2], argv[3]);
	printf("%s\n", tab);
	free(tab);
	return (0);
}
