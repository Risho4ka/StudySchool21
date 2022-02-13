#include "ft_rev_int_tab.c"
#include <stdio.h>

int main(void) {

	int tab[] = { 1, 2, 3, 4, 5 } ;
	int size = 5;

	printf("%d %d %d %d %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);

	ft_rev_int_tab(tab, size); 

	printf("%d %d %d %d %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);

	return(0);
}