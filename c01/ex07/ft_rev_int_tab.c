#include <unistd.h> 
#include "ft_putnbr.c"

void ft_rev_int_tab(int *tab, int size) {

	int a;

	while( --size >= 0 ) {

		a = *(tab + size);
		ft_putnbr(a);
	}
}