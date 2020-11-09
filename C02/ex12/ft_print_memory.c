/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garancecolomer <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 11:12:27 by garanceco         #+#    #+#             */
/*   Updated: 2020/11/04 10:39:00 by garanceco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str++)
		ft_putchar(*str);
}

void *ft_print_memory(void *addr, unsigned int size)
{
	// Afficher en 3 colonnes :
	// 	- Adresse memoire
	// 	- Le contenue en base hexa
	// 	- Le contenue en Ascii
	// Chaque ligne gerent maximum 16 char

	char *c;

	c = addr;
	ft_putstr(c);

}

int main(int argc, char **argv)
{
	(void)argv;
	char tab[] = "Bonjour Les amis \n";
	void *addr;
	addr = tab;
	ft_print_memory(tab, 4);
	return(0);
}
