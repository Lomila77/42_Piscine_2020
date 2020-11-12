/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garancecolomer <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 11:09:22 by garanceco         #+#    #+#             */
/*   Updated: 2020/11/11 11:10:36 by garanceco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	if (!*s1 || !*s2)
		return (*s1 - *s2);
	while (s1[++i] && s2[i])
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
	ft_putchar(' ');
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char	*c;

	i = 0;
	j = 1;
	while (argv[++i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				c = argv[i];
				argv[i] = argv[j];
				argv[j] = c;
			}
			j++;
		}
	}
	i = 0;
	while (argv[++i])
		ft_putstr(argv[i]);
	return (0);
}
