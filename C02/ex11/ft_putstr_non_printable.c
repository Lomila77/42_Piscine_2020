/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garancecolomer <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:12:49 by garanceco         #+#    #+#             */
/*   Updated: 2020/11/02 18:22:23 by garanceco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthexa(char c)
{
	char base[16];
	int  i;

	i = 0;
	base = "0123456789abcdef";
	if (c <= 16)
	{
		write(1, "0", 1);
		ft_putchar(base[c]);
	}
	if (c / 16 > 0)
	{
		ft_puthexa(c / 16);
		i = c % 16 + 1;
		ft_putchar(base[i]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			ft_puthexa(str[i]);
		}
		else
			ft_putchar(str[i]);
	}
}
