/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garancecolomer <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 13:17:29 by garanceco         #+#    #+#             */
/*   Updated: 2020/11/09 16:44:16 by garanceco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int a;
	int b;

	i = -1;
	a = 0;
	while (str[++i])
	{
		b = i;
		while (str[b] == to_find[a] && to_find[a])
		{
			a++;
			b++;
		}
		if (!(to_find[a]))
			return (&str[i]);
		a = 0;
	}
	return (0);
}
