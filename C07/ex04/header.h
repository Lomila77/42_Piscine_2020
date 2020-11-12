#ifndef	HEADER_H
# define HEADER_H

	#include <unistd.h>
	#include <stdlib.h>
	void	ft_putchar(char c);
	int	convert_base(int nbr, char *base, int len, char *str);
	int	lenmalloc(int nbr, char *base, int len);
	char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
	int	check_base(char *base);
	int	check_str(char *str, int *i);
	int	ft_power(int nb, int power);
	int	find_base(char *base, char c);
	int	ft_atoi_base(char *str, char *base);

#endif
