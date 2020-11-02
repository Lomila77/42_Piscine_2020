/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garancecolomer <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:02:18 by garanceco         #+#    #+#             */
/*   Updated: 2020/11/02 18:02:20 by garanceco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = -1;
	while (++i < n && src[i])
		dest[i] = src[i];
	while (++i < n)
		dest[i] = '\0';
	return (dest);
}
