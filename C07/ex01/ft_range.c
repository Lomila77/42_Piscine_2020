/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garancecolomer <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 14:19:26 by garanceco         #+#    #+#             */
/*   Updated: 2020/11/11 15:20:11 by garanceco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int i;
	int j;
	int *tab;

	i = 0;
	j = min - 1;
	if (min >= max)
		return (0);
	while (++j < max)
		i++;
	tab = malloc(sizeof(*tab) * i);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
