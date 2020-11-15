/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garancecolomer <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 16:02:17 by garanceco         #+#    #+#             */
/*   Updated: 2020/11/14 19:20:51 by garanceco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_base(char *base);
int	ft_atoi_base(char *str, char *base);

int	lenmalloc(int nbr, char *base, int len)
{
	int	i;

	i = 0;
	while (nbr)
	{
		nbr /= len;
		i++;
	}
	i++;
	return (i);
}

char	*convert_base(int nbr, char *base, int len, int val)
{
	int	i;
	char	*str;
	int	len_m;

	i = 0;
	str = NULL;
	len_m = 0;
	if (val == 1)
		len_m = 1;
	len_m += lenmalloc(nbr, base, len);
	if ((str = malloc(sizeof(char) * len_m)) == NULL)
		return (str);
	if (val == 1)
		str[0] = '-';
	len_m -= 2;
	while (nbr && len_m - i >= val)
	{
		str[len_m - i] = base[nbr % len];
		nbr /= len;
		i++;
	}
	str[len_m + 1] = '\0';
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	len;
	int	nb;
	int	val;

	val = 0;
	nb = ft_atoi_base(nbr, base_from);
	if (nb < 0)
	{
		nb *= -1;
		val = 1;
	}
	if (!(len = check_base(base_to)))
		return (0);
	return (convert_base(nb, base_to, len, val));
}
