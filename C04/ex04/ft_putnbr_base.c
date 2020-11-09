/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garancecolomer <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 16:32:52 by garanceco         #+#    #+#             */
/*   Updated: 2020/11/09 16:48:41 by garanceco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	convert_base(int nbr, char *base, int len)
{
	if (nbr < len)
	{
		ft_putchar(base[nbr % len]);
	}
	if (nbr >= len)
	{
		convert_base(nbr / len, base, len);
		ft_putchar(base[nbr % len]);
	}
}

int	check_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (base[i])
	{
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int len;

	len = check_base(base);
	if (len == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	convert_base(nbr, base, len);
}
