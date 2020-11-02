/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garancecolomer <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:12:09 by garanceco         #+#    #+#             */
/*   Updated: 2020/11/02 18:12:10 by garanceco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = -1;
	if (!(size))
		return (0);
	size--;
	while (size && src[++i])
	{
		dest[i] = src[i];
		size--;
	}
	dest[++i] = '\0';
	return (ft_strlen(src));
}
