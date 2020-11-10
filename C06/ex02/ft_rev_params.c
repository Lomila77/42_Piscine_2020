/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garancecolomer <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 19:47:04 by garanceco         #+#    #+#             */
/*   Updated: 2020/11/10 19:50:04 by garanceco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		*str++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	while (argv[i])
		i++;
	while (--i > 0)
		ft_putstr(argv[i]);
	return (0);
}
