#include "ft_sort_int_tab.c"
#include <stdio.h>

int main(void) {

	int tab[] = { 2, 5, 1, 4, 3 } ;
	int size = 5;

	printf("%d %d %d %d %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);

	ft_sort_int_tab(tab, size); 

	printf("%d %d %d %d %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);

	return(0);
}