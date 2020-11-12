#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

#include <unistd.h>
# define TRUE		0
# define FALSE		1
# define EVEN(nb)	(!(nb % 2))
# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"
# define SUCCESS	0
typedef int t_bool;

#endif
