/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garancecolomer <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 12:07:15 by garanceco         #+#    #+#             */
/*   Updated: 2020/11/12 21:27:38 by garanceco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	strlloc(char *sep, char **strs, int size)
{
	int	i;
	int	j;

	i = -1;
	j = ft_strlen(sep) * size - ft_strlen(sep) + 1;
	while (++i < size)
		j += ft_strlen(strs[i]);
	return (j);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	l;
	int	m;
	char	*str;

	if (!size)
		return (str);
	if ((str = malloc(sizeof(char) * strlloc(sep, strs, size))) == NULL)
		return (NULL);
	l = 0;
	m = -1;
	while (l < strlloc(sep, strs, size) - 1)
		while (++m < size)
		{
			i = 0;
			while (i < ft_strlen(strs[m]))
				str[l++] = strs[m][i++];
			i = 0;
			while (sep[i] && l + ft_strlen(sep) <
				strlloc(sep, strs, size) - ft_strlen(strs[size - 1]))
				while (sep[i])
					str[l++] = sep[i++];
		}
	str[l] = '\0';
	return (str);
}
