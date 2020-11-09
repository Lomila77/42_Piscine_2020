/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garancecolomer <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 21:31:48 by garanceco         #+#    #+#             */
/*   Updated: 2020/11/08 21:32:03 by garanceco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factoriale(int nb)
{
	int i;
	int nbr;

	i = 1;
	nbr = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		nbr *= i;
		i++;
	}
	return (nbr);
}
