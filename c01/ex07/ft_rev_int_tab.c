#include <unistd.h> 
#include "ft_putnbr.c"

void ft_rev_int_tab(int *tab, int size) {

	int tmp;
	int i = 0;

	while( --size >= i ) {

		tmp = *(tab + size);
		*(tab + size) = *(tab + i);
		*(tab + i) = tmp;
		i++;
	}
}