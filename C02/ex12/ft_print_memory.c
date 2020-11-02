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
