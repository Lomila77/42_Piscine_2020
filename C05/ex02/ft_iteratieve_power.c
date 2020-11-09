/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iteratieve_power.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garancecolomer <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:05:23 by garanceco         #+#    #+#             */
/*   Updated: 2020/11/09 16:07:02 by garanceco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int res;

	res = nb;
	if (nb == 0)
		return (1);
	if (power == 0)
		return (1);
	while (power-- > 1)
		res *= nb;
	return (res);
}
