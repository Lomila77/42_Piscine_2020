/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garancecolomer <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 16:52:19 by garanceco         #+#    #+#             */
/*   Updated: 2020/11/09 16:44:32 by garanceco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int a;

	i = 0;
	a = 0;
	while (dest[i])
		i++;
	while (src[++a] && a + i < size - 1)
		dest[i + a] = src[a];
	dest[i + a] = '\0';
	return (a + i);
}
