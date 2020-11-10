/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garancecolomer <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 19:23:55 by garanceco         #+#    #+#             */
/*   Updated: 2020/11/10 19:25:16 by garanceco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int i;
	int j;

	i = -1;
	j = 0;
	while (base[++i])
	{
		while (base[++j])
			if (base[i] == base[j])
				return (0);
		j = i + 1;
	}
	return (i);
}

int	check_str(char *str, int *i)
{
	int val;

	*i = -1;
	val = 0;
	while (str[++*i] == '\t' || str[*i] == '\n'
		|| str[*i] == '\v' || str[*i] == '\f'
		|| str[*i] == '\r' || str[*i] == ' ')
		;
	while (str[++*i] == '-' || str[*i] == '+')
		if (str[*i] == '-')
			val++;
	return (val);
}

int	ft_power(int nb, int power)
{
	if (nb == 0)
		return (1);
	if (power > 0)
		return (nb * ft_power(nb, power - 1));
	return (1);
}

int	find_base(char *base, char c)
{
	int i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int i;
	int res;
	int j;

	res = 0;
	j = 0;
	check_str(str, &i);
	if ((find_base(base, str[i])) == -1)
		return (0);
	else
		while (str[i] && find_base(base, str[i]) != -1)
			i++;
	while (str[--i] >= *str && str[i] != '-' && str[i] != '+')
		res += find_base(base, str[i]) * ft_power(check_base(base), j++);
	if (!(check_str(str, &i) % 2))
		res *= -1;
	return (res);
}
